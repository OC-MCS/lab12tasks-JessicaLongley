#include <iostream>
using namespace std;

void sign(int n)
{
	while (n > 0)
	{
		cout << "No Parking: " << n << endl;
		n--;
	}
} 
void recursiveSign(int n)
{
    if (n == 0)
    {
        cout << endl;
    }
    else
    {
        cout << "No Parking: " << n << endl;
        recursiveSign(n - 1);
    }
}
int main()
{
	sign(4);
    cout << endl << endl;
    recursiveSign(4);
	return 0;
}


