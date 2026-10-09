import java.util.*;

class Addition {

    public int iSize = 0;
    public int Arr[] = null;

    public Addition(int A) {
        iSize = A;
        Arr = new int[iSize];
    }

    public void Accept() {

        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Enter the Number : ");

        for (iCnt = 0; iCnt < iSize; iCnt++) {

            Arr[iCnt] = sobj.nextInt();

        }

        sobj.close();

    }

    public void Display_Even() {

        int iCnt = 0;

        System.out.println("Reverse Numbers Are : ");
        for (iCnt = iSize - 1; iCnt >= 0; iCnt--) {

            System.out.println(Arr[iCnt]);

        }

    }
}

public class Program27 {
    public static void main(String Arr[]) {

        int iLength = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("How Many Elements You Want in Your Array : ");
        iLength = sobj.nextInt();

        Addition aobj = new Addition(iLength);

        aobj.Accept();

        aobj.Display_Even();

        sobj.close();

    }

}
