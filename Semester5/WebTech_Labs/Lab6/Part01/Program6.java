package Part01;
public class Program6
{  

    
    public static void checkAge(int age) 
    {  
        if (age < 18) 
        {  
            throw new IllegalArgumentException("Age must be 18 or older");  
        }  
    }  

    public static void main(String[] args) 
    {  
        try 
        {  
           
            checkAge(16);  
        } 
        catch (IllegalArgumentException e) 
        {     
            System.out.println(e.getMessage());  
        }  
    }  
}