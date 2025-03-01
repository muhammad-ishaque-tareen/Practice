package Lab4.Task1;

public class Box {
    double width;
    double height;
    double length;
    Box()
    {
        width=1.0;
        height=1.0;
        length=1.0;
    }   
    Box(double w,double h, double l)
    {
        this.width=w;
        this.height=h;
        this.length=l;
    } 
    double CalVol()
    {
        return width*height*length; 
    }

    public static void main(String[] args) {
        Box obj = new Box();
        Box obj2 = new Box(2.3,3.4,4.4);

        double volume=obj.CalVol();
        System.out.println("Print Volume of Constructor: " + volume);

        volume = obj2.CalVol();
        System.out.println("Print Volume of Parameterized Constructor: "+ volume);
    }
}
