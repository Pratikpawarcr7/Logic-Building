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

    void Display_Factors()
    {
        int iCnt = 0;
        cout << "Factors are :" << "\n";

        for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                cout << iCnt << "\n";
            }
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
    cObj.Display_Factors();

    return 0;
}