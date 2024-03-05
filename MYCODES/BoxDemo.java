class Box
{
double width,height,depth;
void volume()
{
return width*height*depth;
}
}
class BoxDemo4
{
Box obj1=new Box;
obj1.heigh=12;
obj1.width=24;
obj1.depth=13;
vol=obj1.volume();
System.out.println("Volume of the box: "+vol);
}
}
