package Lab5.Part2;

public class Task1 {
    public static void main(String[] args) {
       

        Bird obj1 = new Penguin();
        obj1.fly();
    }
    
}

class Bird{
   
       void fly()
       {
        System.out.println("Birds are flying:");
       }
}

class Penguin extends Bird{
    @Override
    void fly()
    {
        System.out.println("Penguin cannot fly:");
    }

}