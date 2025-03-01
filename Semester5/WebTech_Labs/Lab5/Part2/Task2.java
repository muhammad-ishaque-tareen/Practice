package Lab5.Part2;

public class Task2 {
    public static void main(String[] args) {
        Computer obj = new Laptop();
        obj.start();
        obj.shutdown();

    }
}

class Computer{
    void start()
    {
        System.out.println("Computer starts:");
    }
    void shutdown()
    {
        System.out.println("Computer shut down:");
    
    }
}

class Laptop extends Computer{
    @Override
    void start()
    {
        System.out.println("Laptop is Starting :");
    }
    @Override
    void shutdown()
    {
        System.out.println("Laptop is shuting down:");
    }
}