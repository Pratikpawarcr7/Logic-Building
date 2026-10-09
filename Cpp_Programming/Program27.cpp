#include <iostream>
using namespace std;

class Display
{
public:
    int iSize;
    int *Arr = NULL;

    Display(int B)
    {
        iSize = B;
        Arr = new int[iSize];
    }

    void Accept()
    {
        int iCnt = 0;
        cout << "Enter the Elements" << "\n";
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Reverse_Numbers()
    {
        int iCnt = 0;
        cout << "Elements Are : " << "\n";
        for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
        {
            cout << Arr[iCnt] << "\n";
        }
    }
};
int main()
{
    int iCnt = 0;
    int iLength = 0;
    int *iPtr = NULL;

    cout << "How Many Elements You Want in Your Array :\n";
    cin >> iLength;

    Display dobj(iLength);
    dobj.Accept();
    dobj.Reverse_Numbers();

    return 0;
}