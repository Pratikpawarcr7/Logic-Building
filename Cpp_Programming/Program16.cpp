#include <iostream>
using namespace std;

int main()
{
    int Number;

    cout << "Enter number: ";
    cin >> Number;

    if (Number % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}