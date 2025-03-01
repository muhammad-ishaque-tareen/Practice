package Lab3;

public class RectangleComputation {
    public static void main(String[] args) {

        double length=3.3,width=4.0,area,perimeter;

        area = length*width;
        perimeter = 2*(length+width);
        
        System.out.println("Area of Rectangle :" + area);
        System.out.print("Perimeter of Rectangle :" + perimeter);
        
    }
}
