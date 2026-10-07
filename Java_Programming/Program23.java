import java.util.*;

class Display_Even_Odd {

    public int iSize = 0;
    public int Arr[] = null;

    public Display_Even_Odd(int A) {

        iSize = A;
        Arr = new int[iSize];
    }

    public void Accept() {

        int iCnt = 0;

        System.out.println("Enter the Number : ");
        Scanner sobj = new Scanner(System.in);

        for (iCnt = 0; iCnt < iSize; iCnt++) {

            Arr[iCnt] = sobj.nextInt();

        }

        sobj.close();

    }

    public void Summation_Even_Odd() {
        int Even_iSum = 0;
        int Odd_iSum = 0;
        int iCnt = 0;

        for (iCnt = 0; iCnt < iSize; iCnt++) {

            if (Arr[iCnt] % 2 == 0) {
                Even_iSum = Even_iSum + Arr[iCnt];
            } else {
                Odd_iSum = Odd_iSum + Arr[iCnt];
            }
        }
        System.out.println("Summation of Even Numbers Are : " + Even_iSum);
        System.out.println("Summation of Odd Numbers Are : " + Odd_iSum);
    }

}

public class Program23 {

    public static void main(String[] args) {

        int iLength = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("How Many Elements You Want :");
        iLength = sobj.nextInt();

        Display_Even_Odd Display_Even_OddX = new Display_Even_Odd(iLength);

        Display_Even_OddX.Accept();

        Display_Even_OddX.Summation_Even_Odd();
        sobj.close();
    }

}
