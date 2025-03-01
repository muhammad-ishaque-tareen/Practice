package Lab5.Part5;

public class Task1 {
    public static void main(String[] args) {
        
    }
}

interface Readable {

    void read();
}

interface Writable{
    void write();
}

class EBook implements Writable,Readable{
    public void read(){
        System.out.println("Reads the EBook");
    }
    public void write(){
        System.out.println("Writes the EBook");
    }

}
