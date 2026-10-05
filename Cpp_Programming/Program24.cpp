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

    int Display_Even()
    {
        int iCnt = 0;
        int iSum = 0;
        int iCount_1 = 0;

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            if ((Arr[iCnt] % 2) == 0)
            {
                iCount_1++;
            }
        }

        cout << "Count of Even Numbers : " << iCount_1 << "\n";
    }

    int Display_Odd()
    {
        int iCnt = 0;
        int iSum = 0;
        int iCount_2 = 0;

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            if ((Arr[iCnt] % 2) != 0)
            {
                iCount_2++;
            }
        }

        cout << "Count of Even Numbers : " << iCount_2 << "\n";
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
    dobj.Display_Even();
    dobj.Display_Odd();

    return 0;
}