import java.util.Scanner;

class Display {
    public int iNo;

    public Display(int A) {

        iNo = A;
    }

    public void Numbers() {
        int iCnt = 0;

        System.out.println("OutPut = :");
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            System.out.println(iCnt);
        }
    }
}

public class Program09 {
    public static void main(String Arr[]) {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();

        Display dobj = new Display(iValue);
        dobj.Numbers();

        sobj.close();

    }

}
