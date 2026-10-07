import java.util.*;

class Display_Even_Odd {

    public int iSize = 0;
    public int iFind = 0;
    public int Arr[] = null;

    public Display_Even_Odd(int A, int B) {

        iSize = A;
        Arr = new int[iSize];
        iFind = B;
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

    public boolean Search() {

        int iCnt = 0;
        boolean bFlage = false;

        for (iCnt = 0; iCnt < iSize; iCnt++) {

            if (Arr[iCnt] == iFind) {

                bFlage = true;
                break;

            }
        }

        return bFlage;

    }

}

public class Program24 {

    public static void main(String[] args) {

        int iLength = 0;
        int iSearch = 0;
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("How Many Elements You Want :");
        iLength = sobj.nextInt();

        System.out.println("Enter the Number That you Want To Search : ");
        iSearch = sobj.nextInt();

        Display_Even_Odd Display_Even_OddX = new Display_Even_Odd(iLength, iSearch);

        Display_Even_OddX.Accept();

        bRet = Display_Even_OddX.Search();
        if (bRet == true) {
            System.out.println("Element is Present : " + iSearch);
        } else {
            System.out.println("Element is Absent : " + iSearch);
        }
        sobj.close();
    }

}
