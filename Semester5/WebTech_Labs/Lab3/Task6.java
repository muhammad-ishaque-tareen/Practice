package Lab3;

public class Task6 {

    public static double square(double number){
        double t;
        double squareroot = number / 2;
        do 
        {
        t = squareroot;
        squareroot = (t + (number / t)) / 2;
        }
         while ((t - squareroot) != 0);
        return squareroot;
        }

    public static void main(String[] args) {

        double side1=2.3,side2=3.2, side3=1.2;

      double Perimeter = side1+side2+side3;
      double s = (side1+side2+side3)/2;
      double area = (s* (s - side1) * (s-side2)* (s - side3));
      double newarea = square(area);
      System.out.println("Area of Triangle :" + newarea);
      System.out.println("Perimeter of triangle :" + Perimeter);
    }
    
}



// double squareroot = number / 2;

// t = squareroot;
// squareroot = (t + (number / t)) / 2;