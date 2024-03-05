import java.util.Scanner;
public class area
{
public static void main(String[] args)
{
Scanner input=new Scanner(System.in);
System.out.println("Enter a radius:");
double radius=input.nextDouble();
double area=radius*radius*3.14;
System.out.println("Area of circle="+area);
}
}
