import java.util.*;

class Display {
    public int iNo1;

    public Display(int A) {
        iNo1 = A;
    }

    public boolean Number() {
        // Check if the entered number is divisible by 5
        return (iNo1 % 3 == 0);
    }
}

public class Program16 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        int iValue1 = sobj.nextInt();

        Display dobj = new Display(iValue1);

        boolean bFlag = dobj.Number();
        if (bFlag) {
            System.out.println(iValue1 + " is Divisible By 3");
        } else {
            System.out.println(iValue1 + " is Not Divisible By 3");
        }

        sobj.close();
    }
}
