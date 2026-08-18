import java.util.Scanner;

class Largest
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int Number1, Number2;

        System.out.print("Enter first number: ");
        Number1 = sobj.nextInt();

        System.out.print("Enter second number: ");
        Number2 = sobj.nextInt();

        if (Number1 > Number2)
        {
            System.out.println(Number1 + " is largest");
        }
        else if (Number2 > Number1)
        {
            System.out.println(Number2 + " is largest");
        }
        else
        {
            System.out.println("Both numbers are equal");
        }

        sobj.close();
    }
}