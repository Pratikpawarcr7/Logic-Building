import java.util.*;

class Arithmatic {

    public int iValue1 = 0;
    public int iValue2 = 0;

    public Arithmatic(int A, int B) {
        iValue1 = A;
        iValue2 = B;
    }

    public int Addition() {
        int iResult = 0;
        iResult = iValue1 + iValue2;
        return iResult;
    }
}

public class Program06 {

    public static void main(String Arr[]) {
        int iNo1 = 0;
        int iNo2 = 0;
        int iAns = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the 1st Element");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the 2nd Element");
        iNo2 = sobj.nextInt();

        Arithmatic aObj = new Arithmatic(iNo1, iNo2);
        iAns = aObj.Addition();
        System.out.println("ADDITION=" + iAns);

        sobj.close();
    }
}