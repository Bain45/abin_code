class product
{
int pcode;
String pname;
int pprice;
product(int code,String name,int price)
{
pcode=code;
pname=name;
pprice=price;
}
void display()
{
System.out.println("\n Product code:"+pcode);
System.out.println("\n Product name:"+pname);
System.out.println("\n Product price:"+pprice);
}
}
class ProductDetails
{
public static void main(String[] args)
{
product obj1=new product(101,"pen",8);
product obj2=new product(102,"pencil",10);
product obj3=new product(103,"Book",45);
System.out.println("Product with lowest price is");
if(obj1.pprice<obj2.pprice)
if(obj1.pprice<obj3.pprice)
obj1.display();
else
obj3.display();
else if(obj3.pprice<obj2.pprice)
obj3.display();
else
obj2.display();
}
}
