import java.util.*;

class Display {
    public int iNo1;

    public Display(int A) {
        iNo1 = A;
    }

    public int Number() {
        int iCnt = 0;
        int iSum = 0;

        System.out.println("Factors of " + iNo1 + " Are :");
        for (iCnt = 1; iCnt < iNo1; iCnt++) {

            if (iNo1 % iCnt == 0) {
                iSum = iSum + iCnt;
            }

        }

        return iSum;
    }

}

public class Program14 {

    public static void main(String Arr[]) {

        int iValue1 = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.err.println("Enter the Number : ");
        iValue1 = sobj.nextInt();

        Display dobj = new Display(iValue1);

        iRet = dobj.Number();
        System.out.println("Addition is : " + iRet);
        sobj.close();

    }

}
