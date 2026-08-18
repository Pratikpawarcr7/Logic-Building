#include <iostream>
using namespace std;

int main()
{
    int Number1, Number2;

    cout << "Enter first number: ";
    cin >> Number1;

    cout << "Enter second number: ";
    cin >> Number2;

    if (Number1 > Number2)
    {
        cout << Number1 << " is largest" << endl;
    }
    else if (Number2 > Number1)
    {
        cout << Number2 << " is largest" << endl;
    }
    else
    {
        cout << "Both numbers are equal" << endl;
    }

    return 0;
}