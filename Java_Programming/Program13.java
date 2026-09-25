import java.util.*;

class Display {
    public int iNo1;

    public Display(int A) {
        iNo1 = A;
    }

    public void Number() {
        int iCnt = 0;

        System.out.println("Factors of " + iNo1 + " Are :");
        for (iCnt = 1; iCnt < iNo1; iCnt++) {

            if (iNo1 % iCnt == 0) {
                System.out.println(iCnt);
            }

        }
    }

}

public class Program13 {

    public static void main(String Arr[]) {

        int iValue1 = 0;

        Scanner sobj = new Scanner(System.in);

        System.err.println("Enter the Number : ");
        iValue1 = sobj.nextInt();

        Display dobj = new Display(iValue1);

        dobj.Number();
        sobj.close();

    }

}
