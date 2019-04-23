#include <iostream>
using namespace std;

int power(int b, int e)
{
    if (e > 0)
    {
        return b * power(b, e-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int temp = power(2, 2);
    cout << temp << endl;

    int temp1 = power(2, 3);
    cout << temp1 << endl;

    int temp2 = power(3, 4);
    cout << temp2 << endl; 

    //cout << power(2, 1) << endl;
    //cout << power(2, 0) << endl;

	return 0;
}