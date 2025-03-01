package Lab5.Part4;

public class Task3 {
    public static void main(String[] args) {
        Flyable obj = new Airplane();
        obj.fly();
        Flyable obj1 = new Helicopter();
        obj1.fly();
    }
}

interface Flyable {

    void fly();
    
}

class Airplane implements Flyable{
    public void fly()
    {
        System.out.println("AirPlane fly very fast ");
    }
}

class Helicopter implements Flyable{
    public void fly()
    {
        System.out.println("Helicopter fly slow ");
    }
}