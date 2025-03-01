
public class MyRunnable implements Runnable
{
     public void run() 
     {
        System.out.println("Thread is running successfully...");
     }
    
     public static void main(String[] args) 
     {
        MyRunnable _MyRunnable = new MyRunnable();
        Thread thread = new Thread(_MyRunnable); // Creating a Thread object
        thread.run(); // Starting the thread

    }
}