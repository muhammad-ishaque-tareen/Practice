package Lab4;

public class Circle {

    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double calculateArea() {
        return 3.14159 * radius * radius;
    }

    public double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }

    public static void main(String[] args) {
        Circle circle = new Circle(5.0);
        System.out.println("The Area of circle = " + circle.calculateArea());
        System.out.println("The Circumference of circle = " + circle.calculateCircumference());
    }
}
