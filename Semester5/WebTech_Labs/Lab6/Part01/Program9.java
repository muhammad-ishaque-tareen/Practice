package Part01;

public class Program9  
{
 void methodA() {
        
    }
    void methodB() {
        methodA();
        
    }
    void methodC() {
        methodB();
    
    }
    public static void main(String[]args)
    {
        Program8 p8=new Program8();
        p8.methodC();
    }
    
}

    

