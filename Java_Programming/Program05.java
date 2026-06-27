import java.util.*;

class Calculate_Percentage {

    public int iNo1;
    public int iNo2;

    public Calculate_Percentage(int A, int B) {
        iNo1 = A;
        iNo2 = B;
    }

    public float Calculation() {

        float fPercentage = 0.0f;
        fPercentage = ((float) iNo1 / (float) iNo2) * 100;
        return fPercentage;

    }
}

public class Program05 {
    public static void main(String Arg[]) {

        int iValue1 = 0;
        int iValue2 = 0;
        float fResult = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter obtain mark in your exam");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the obtain mark");
        iValue2 = sobj.nextInt();

        Calculate_Percentage cObj = new Calculate_Percentage(iValue1, iValue2);

        fResult = cObj.Calculation();

        System.out.println("Your percentage is :" + fResult);

        sobj.close();
    }

}
