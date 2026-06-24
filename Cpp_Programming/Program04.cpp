#include <iostream>
using namespace std;

class Percentage
{

public:
    int iNo1;
    int iNo2;

    Percentage(int A, int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    float Calculate_Percentage()
    {
        float fResult = 0.0f;
        fResult = ((float)iNo1) / ((float)iNo2) * 100;
        return fResult;
    }
};
int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    float fFlage = 0.0f;

    cout << "Enter the Obtained Marks in Your Exam" << "\n";
    cin >> iValue1;

    cout << "Enter the Obtained" << "\n";
    cin >> iValue2;

    Percentage pObj(iValue1, iValue2);
    fFlage = pObj.Calculate_Percentage();

    cout << "Percentage :" << fFlage;

    return 0;
}