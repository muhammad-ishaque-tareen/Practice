package Lab4;

public class Box {
    double width;
    double height;
    double length;
    Box()
    {
        System.out.println("Box Class Constructor:");
        width=10;
        height=10;
        length=10;
    }   
    Box(double w,double h, double l)
    {
        System.out.println("Parameterized Constructor:");
        this.width=w;
        this.height=h;
        this.length=l;
    } 
}
