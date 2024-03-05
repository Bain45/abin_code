class Box
{
double width,height,depth;
double Volume()
{
return width*height*depth;
}

void setDim(double w,double h,double d)
{
width=w;
height=h;
depth=d;
}
}

class BoxDemo5
{
public static void main(String[] args)
{
Box obj1=new Box();
double vol;
obj1.setDim(12,24,13);
vol=obj1.Volume();
System.out.println("Volume of box is"+vol);
}
}
