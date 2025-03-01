package Part02; 
class MyThread extends Thread 
{  
    public void run() {  
        System.out.println("Thread created using Thread class.");  
    }  
}  
 
class MyRunnable implements Runnable 
{  
    public void run() 
    {  
        System.out.println("Thread created using Runnable interface.");  
    }  
}  

public class MainClass
{  
    public static void main(String[] args) {  
        MyThread myThread = new MyThread();  
        myThread.start(); 
        Thread runnableThread = new Thread(new MyRunnable());  
        runnableThread.start();    
    }  
}