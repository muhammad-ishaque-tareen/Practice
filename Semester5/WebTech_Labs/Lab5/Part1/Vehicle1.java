package Lab5.Part1;

public class Vehicle1 {
    int speed;
    Vehicle1()
    {
        speed=0;
    }
    void run()
    {

        System.out.println("Vehicle Speed is very fast ");
        System.out.println("Speed of Vehicle :"+ speed);
    }
    public static void main(String[] args) {
        Bike1 obj = new Bike1(12);
        obj.ringbell();
        obj.run(); 
        

    }

}

 class Bike1 extends Vehicle1{
    Bike1(int num)
    {
     speed = num;
    }
    void ringbell()
    {
       System.out.println("bikes rings bell :");
    }
 
    
}
