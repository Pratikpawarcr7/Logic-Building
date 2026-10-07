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

    public int Count_Odd() {

        int iCnt = 0;
        int iCount = 0;

        for (iCnt = 0; iCnt < iSize; iCnt++) {

            if (Arr[iCnt] % 2 != 0) {
                iCount++;
            }

        }
        return iCount;

    }
}

public class Program20 {
    public static void main(String Arr[]) {

        int iLength = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("How Many Elements You Want in Your Array : ");
        iLength = sobj.nextInt();

        Addition aobj = new Addition(iLength);

        aobj.Accept();

        iRet = aobj.Count_Odd();
        System.out.println("Toatal Number of Odd Elemnets Are : " + iRet);

        sobj.close();

    }

}
