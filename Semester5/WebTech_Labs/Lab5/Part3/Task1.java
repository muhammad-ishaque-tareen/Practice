package Lab5.Part3;

public class Task1 {
    public static void main(String[] args) {
        Animal obj = new Cow();
        Animal obj1 = new Lion();
        obj.sound();
        obj1.sound();
        obj.eat();
        obj1.eat();
    }
}

abstract class Animal{
    abstract void sound();
    abstract void eat();
    void sleep(){
        System.out.println("Animal is sleeping :");
    }
}
class Cow extends Animal {
     void sound(){
        System.out.println("Cow sound starts ");
     }
     void eat(){
        System.out.println("cow eats grass ");
     }
}

class Lion extends Animal{
    void sound()
    {
        System.out.println("lion sounds starts ");
    }
    void eat()
    {
        System.out.println("Lion eats meat ");
    }

}
