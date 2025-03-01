public class Exception1 
{
public static void main(String[] args)
{
    try 
    {
    int data = 100 / 0; // May throw ArithmeticException
    } 
    catch (ArithmeticException e) 
    {
    System.out.println("Exception caught: " + e);
    }
    System.out.println("Program continues...");
}
}