#include <iostream>
using namespace std;

class Display
{
public:
    int iNo1;
    int iNo2;

    int Circle_Area(float fRadius)
    {
        float fArea = 0.0f;
        fArea = 3.14 * fRadius * fRadius;
        return fArea;
    }
};
int main()
{

    float fValue = 0.0f;
    float fResult = 0.0f;

    cout << "Enter the Radius of Circle\n";
    cin >> fValue;

    Display obj;
    fResult = obj.Circle_Area(fValue);

    cout << "Area of Circle are :" << fResult;

    return 0;
}