#include <iostream>
using namespace std;

class Display
{

public:
    int iNo1;

    void iNumbers(int iNo)
    {
        int iCnt = 0;
        cout << "numbers are :" << "\n";
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout << iCnt << "\n";
        }
    }
};
int main()
{
    int iValue = 0;
    cout << "Enter the Number" << "\n";
    cin >> iValue;

    Display dobj;
    dobj.iNumbers(iValue);

    return 0;
}