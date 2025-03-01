public class Exception2 
{
    public static void main(String[] args)
    {
        try 
        {
            int[] arr = new int[5];
            arr[5] = 30 / 0; // May throw ArrayIndexOutOfBoundsException or ArithmeticException
        } 
        catch (ArithmeticException e) 
        {
            System.out.println("Arithmetic Exception occurred");
        } 
        catch (ArrayIndexOutOfBoundsException e) 
        {
            System.out.println("ArrayIndexOutOfBoundsException occurred");

        } 
        catch (Exception e) 
        {
            System.out.println("Parent Exception occurred");
        }   
        System.out.println("Program continues...");
    }
}