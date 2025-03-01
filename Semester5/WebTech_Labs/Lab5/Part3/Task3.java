package Lab5.Part3;

import java.util.ArrayList;
import java.util.List;

public class Task3 {
    public static void main(String[] args) {
        Animal1 lion= new Lion1();
        Animal1 cow = new Cow1();
        List<Animal1> animals = new ArrayList<>();
        animals.add(cow);
        animals.add(lion);
        animals.add(cow);
        for (Animal1 animal : animals) {
           animal.sound();
    }
    }
}

abstract class Animal1{
    abstract void sound();
    abstract void eat();
    void sleep(){
        System.out.println("Animal is sleeping :");
    }
}
class Cow1 extends Animal1 {
     @Override
     void sound(){
        System.out.println("Cow sound starts ");
     }
     void eat(){
        System.out.println("cow eats grass ");
     }
}

class Lion1 extends Animal1{
    @Override
    void sound()
    {
        System.out.println("lion sounds starts ");
    }
    void eat()
    {
        System.out.println("Lion eats meat ");
    }

}

