import java.util.*;

class Display {

    public int iNo;

    public Display(int A) {
        iNo = A;
    }

    public void Jay_Ganesh() {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            System.out.println("Jay Ganesh...");
        }
    }

}

public class Program03 {
    public static void main(String Arg[]) {

        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number");
        iValue = sobj.nextInt();

        Display dobj = new Display(iValue);
        dobj.Jay_Ganesh();
        sobj.close();

    }
}
