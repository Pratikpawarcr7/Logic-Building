#include <iostream>

using namespace std;

class Check_Factors
{

public:
    int iNo;

    Check_Factors(int A)
    {
        iNo = A;
    }

    int Display_Factors()
    {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt < iNo; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if (iSum == iNo)
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

    Check_Factors cObj(iValue);
    bRet = cObj.Display_Factors();

    if (bRet == true)
    {
        cout << iValue << " is Perfect Number" << "\n";
    }
    else
    {
        cout << iValue << " is Not Perfect Number" << "\n";
    }

    return 0;
}