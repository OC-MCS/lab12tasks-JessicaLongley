#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isBalanced(string s)
{
	// replace the body of this function 
    vector<char> vect;
    int count = 0; //counter to move through the string passed in

    //fill vect with the chars of the string passed into isBalanced
    for (count; count < s.length(); count++)
    {
        //vect.push_back(s[count]); //index through string and push_back char
        if (s[count] == '(')
        {
            vect.push_back(s[count]);
        }

        else if (s[count] == ')') //IS IT BETTER FOR THIS TO BE ELSE IF?
        {
            if (vect.size() == 0)
                return false;

            vect.pop_back();
        }
    }
    return (vect.size() == 0);

}

int main()
{
	ifstream file;
	file.open("balancedTestCases.txt");
	string s;

	while (getline(file, s))
	{
		if (isBalanced(s))
			cout << s << " is balanced." << endl;
		else
			cout << s << " is not balanced. " << endl;
	}

}