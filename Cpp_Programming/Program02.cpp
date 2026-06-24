#include <iostream>
using namespace std;

class Display
{

public:
    int iNo1;

    int Jay_Ganesh(int iNo)
    {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout << "Jay Ganesh..." << "\n";
        }
    }
};
int main()
{
    int iValue = 0;
    cout << "Enter the Number" << "\n";
    cin >> iValue;

    Display dobj;
    dobj.Jay_Ganesh(iValue);

    return 0;
}