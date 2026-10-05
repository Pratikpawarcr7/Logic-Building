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

    int Display_Maximum()
    {
        int iCnt = 0;
        int iMax = 0;
        iMax = Arr[0];

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            if (Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax;
    }
};
int main()
{
    int iCnt = 0;
    int iLength = 0;
    int *iPtr = NULL;
    int iRet = 0;

    cout << "How Many Elements You Want in Your Array :\n";
    cin >> iLength;

    Display dobj(iLength);
    dobj.Accept();
    iRet = dobj.Display_Maximum();

    cout << "Maximum Elements is : " << iRet;

    return 0;
}