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

        if (((iNo % 3) == 0) && ((iNo % 5) == 0))
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
        cout << iValue << " is Diveded by 3 and 5" << "\n";
    }
    else
    {
        cout << iValue << " is Not Diveded by 3 and 5" << "\n";
    }

    return 0;
}