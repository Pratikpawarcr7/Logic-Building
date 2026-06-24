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
        return iSum;
    }
};
int main()
{

    int iValue = 0;
    int iRet = 0;
    cout << "Enter the Number" << "\n";
    cin >> iValue;

    Check_Factors cObj(iValue);
    iRet = cObj.Display_Factors();

    cout << "Summation :" << iRet;

    return 0;
}