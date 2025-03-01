package Part01;
import java.util.Scanner;
public class Program5
{
   
 
   public static void main(String[] args) 
   {
      Scanner s1= new Scanner(System.in);
      System.out.print("Enter the Age : ");
      int _age=s1.nextInt();
        try 
        {
            checkAge(_age); 
        }
        catch (IllegalArgumentException e) 
        {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
    public static void checkAge(int age)
    {
        if (age < 18) 
        {
            throw new IllegalArgumentException("Age must be 18 or older");
        }
    }
}