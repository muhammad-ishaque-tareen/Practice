package Lab5.Part4;

public class Task1 {
    public static void main(String[] args) {
        Song obj = new Song();
        obj.play();
        obj.pause();
    }
}

interface  Playable {
void play();
void pause();
}

class Song implements Playable{
    public void play(){
        System.out.println("Songs plays");
    }
    public void pause(){
        System.out.println("Songs paused ");
    }
}
