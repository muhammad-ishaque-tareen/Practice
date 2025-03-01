package Lab5.Part1;

public class SimpleInherit {
    public static void main(String[] args) {
        WashingMachine obj1 = new WashingMachine();
        Refrigerator obj2 = new Refrigerator();
        obj1.washclothes();
        obj2.KeepCool(); 
    }
}


class Appliance{
    private String brand;

    Appliance()
    {
        brand = "";
    }
    void turnOn()
    {
        System.out.println("Appliance");
    }

}

class WashingMachine extends Appliance{
    
    void washclothes()
    {
        System.out.println("Washing Machine washes clothes");
    }
}

class Refrigerator extends Appliance {
    void KeepCool(){
        System.out.println("Refrigerator keep cool the things ");
    }
}
