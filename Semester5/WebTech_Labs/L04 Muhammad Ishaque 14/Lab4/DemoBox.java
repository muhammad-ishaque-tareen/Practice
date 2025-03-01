package Lab4;
class Box
{
    double width; double height; double length;

    Box()
    {
        width=30.5;
        height=10.8568;
        length=43.85754300;
    }
    Box(double l, double h, double w)
    {
        width=w;
        height=h;
        length=l;
    }
    double volume()
    {
        return length*width*height;
    }
}
class DemoBox
{
    public static void main(String[] args)
    {
        Box MyBox = new Box();
        double volume1= MyBox.volume();
        System.out.println("Volume of Default Constructor is: "+ volume1);
        Box MyBox1=new Box(2.34, 6.43, 4.34);
        double volume2 = MyBox1.volume();
        System.out.println("Volume of Parameterized Constructor is: "+ volume2);
        
    }

}