class Box
{
double width,height,depth;
double volume()
{
return width*height*depth;
}
}
class BoxDemo4
{
public static void main(String[] args)
{
Box obj1=new Box();
double vol;
obj1.height=12;
obj1.width=24;
obj1.depth=13;
vol=obj1.volume();
System.out.println("Volume of the box: "+vol);
}
}

