import java.util.Scanner;
class A03_Addition
{
    public static void main(String[] args) {
        Scanner myobject=new Scanner(System.in);
        System.out.println("Enter 1st no:");
        int a=myobject.nextInt();
        System.out.println("Enter 2nd no:");
        int b=myobject.nextInt();
        int add=a+b;
        System.out.println("Addition="+add);
        //System.out.println("Addition="+(a+b));
    }
}