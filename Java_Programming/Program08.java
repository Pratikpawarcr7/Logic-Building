import java.util.*;

class Pass_or_Fail {

    public float iNo1;

    public Pass_or_Fail(float A) {
        iNo1 = A;
    }

    public void DisplayResult() {

        if (iNo1 >= 40.00f) {
            System.out.println("you are pass\n");
        } else {

            System.out.println("you are fail\n");
        }
    }
}

public class Program08 {
    public static void main(String Arr[]) {

        float fValue1 = 0.0f;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Percentage");
        fValue1 = sobj.nextFloat();

        Pass_or_Fail pobj = new Pass_or_Fail(fValue1);
        pobj.DisplayResult();

        sobj.close();

    }

}
