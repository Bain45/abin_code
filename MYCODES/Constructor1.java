class Employee
{
int eno;
String cName;
Employee()
{
  eno=100;
  cName="Adarsh";
}
void show()
{
  System.out.println("\nEmployee No:-"+eno+ "\nEmployee Name:-"+cName);
}
}  
class Constructor1
{
  public static void main(String args[])
  {
    Employee obj1=new Employee();
    obj1.show();
  }
}
   
