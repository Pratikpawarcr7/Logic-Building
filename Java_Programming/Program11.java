class Arithmatics {

    public int iNo1;
    public int iNo2;

    public Arithmatics() {

        System.out.println("Inside Default Constructor");

        this.iNo1 = 0;
        this.iNo2 = 0;

    }

    public Arithmatics(int A, int B) {

        System.out.println("Inside Default Constructor");
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int Addition() {

        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;

    }

    public int Substraction() {

        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;

    }
}

public class Program11 {

    public static void main(String Arr[]) {

        int iRet = 0;

        Arithmatics aobj1 = new Arithmatics(16, 29);
        iRet = aobj1.Addition();
        System.out.println("Addition : " + iRet);

        iRet = aobj1.Substraction();
        System.out.println("Substraction : " + iRet);

    }

}
