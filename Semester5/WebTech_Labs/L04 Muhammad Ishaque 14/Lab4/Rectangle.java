package Lab4;

public class Rectangle 
{

    private double length;
    private double width;

    public Rectangle(double length, double width) 
    {
        this.length = length;
        this.width = width;
    }
    public double calculatePerimeter()
    {
        return 2 * (length + width);
    }

    public double calculateArea() 
    {
        return length * width;
    }

    
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5.0, 3.0);
        System.out.println("Area of the rectangle = " + rectangle.calculateArea());
        System.out.println("Perimeter of the rectangle = " + rectangle.calculatePerimeter());
    }
}
