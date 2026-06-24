import java.util.*;

class Display {
    public float iNo1;

    public float Circle_Area(float fRadius) {
        float fArea = 0.0f;
        fArea = 3.14f * fRadius * fRadius;
        return fArea;
    }
}

public class Program04 {

    public static void main(String args[]) {

        float iValue1 = 0.0f;

        float fRadius = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Radius");
        iValue1 = sobj.nextFloat();

        Display dobj = new Display();
        fRadius = dobj.Circle_Area(iValue1);

        System.out.println("Area of Circle are :" + fRadius);
        sobj.close();

    }
}