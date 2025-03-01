package Lab5.Part1;

public class Vehicle {
    private int speed;
    Vehicle()
    {
        speed=0;
    }
    void run()
    {
        System.out.println("Vehicle Speed is very fast ");
    }
    public static void main(String[] args) {
        Bike obj = new Bike();
        obj.ringbell();
        obj.run(); 
    }

}

 class Bike extends Vehicle{
   
    void ringbell()
    {
       System.out.println("bikes rings bell :");
    }
 }
