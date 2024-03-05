import java.util.Scanner;
public class average
{
public static void main(String[] args)
{
Scanner input=new Scanner(System.in);
System.out.println("Enter first number:");
double first=input.nextDouble();
System.out.println("Enter second number:");
double second=input.nextDouble();
System.out.println("Enter third number:");
double third=input.nextDouble();
double average=(first+second+third)/3;
System.out.println("Average="+average);
}
}
