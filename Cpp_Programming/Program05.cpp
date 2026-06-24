#include <iostream>
using namespace std;

class Percentage
{

public:
    int iNo1;

    Percentage(int A)
    {
        iNo1 = A;
    }

    void Calculate_Percentage()
    {
        if (iNo1 >= 40.00f)
        {
            cout << "You Are Pass";
        }
        else
        {
            cout << "You Are Fail";
        }
    }
};
int main()
{

    float iValue1 = 0;

    cout << "Enter the Percentage" << "\n";
    cin >> iValue1;

    Percentage pObj(iValue1);
    pObj.Calculate_Percentage();

    return 0;
}