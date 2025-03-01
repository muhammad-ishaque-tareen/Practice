package Lab5.Part2;

public class Task3 {
    public static void main(String[] args) {
        Bird obj = new Penguin();
        obj.fly();
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