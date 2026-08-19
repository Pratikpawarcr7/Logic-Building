import java.util.Scanner;

class EvenOdd {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number: ");
        int Number = sobj.nextInt();

        if (Number % 2 == 0)
            System.out.println("Even");
        else
            System.out.println("Odd");

        sobj.close();
    }
}