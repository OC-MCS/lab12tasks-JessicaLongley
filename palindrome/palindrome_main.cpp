#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
    bool returnValue = true; //WHY DOES THIS HAVE TO START AS TRUE?
    int firstLetter = 0; //always the first letter index
    int lastLetter = s.size() - 1; //always the last letter index?
    string temp;

    if (s.size() > 1)
    {
        if (s[firstLetter] == s[lastLetter]) //if the first and last letter are the same
        {
            temp = s.substr(firstLetter + 1, lastLetter - 1); //knock off the first and last letter
            returnValue = isPalindrome(temp); //try to do it again
        }
        else //if the first and last letter are not the same
        {
            returnValue = false; 
        }
    }
    else // if (s.size() == 1 || s.size() == 0) //if there is one or zero letters
    {
        returnValue = true; //it is a palindrome
    }
    return returnValue;
}

string betterString(string s)
{
    string returnString; 
    int i = 0; //index

    for (i; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            returnString += tolower(s[i]);
        }
    }

    return returnString;
}

int main()
{
    ifstream file;
    file.open("testCases.txt");
    string s;
    string betterS;

    while (getline(file, s))
    {
        betterS = betterString(s); //fix s
        //cout << s << endl; ///TESTING
        //cout << betterS << endl;

        if (isPalindrome(betterS))
            cout << s << " -is a palindrome." << endl;
        else
            cout << s << " -is not a palindrome. " << endl;
    }
	return 0;
}