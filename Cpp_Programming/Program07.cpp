#include <iostream>
#include <stdbool.h>
using namespace std;

class Divisible
{

public:
    int iNo;

    Divisible(int A)
    {
        iNo = A;
    }

    int CheckDivisible()
    {
        int iResult = 0;
        iResult = iNo % 5;

        if (iResult == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    int iValue = 0;
    bool bRet = false;
    cout << "Enter the Number" << "\n";
    cin >> iValue;

    Divisible dObj(iValue);
    bRet = dObj.CheckDivisible();

    if (bRet == true)
    {
        cout << iValue << " is Diveded by 5" << "\n";
    }
    else
    {
        cout << iValue << " is Not Diveded by 5" << "\n";
    }

    return 0;
}