package Part01;

public class Program8
{

    public static void main(String[]args)
    {
        int arr[]=new int[5];
        try
        {
            arr[25]=5/0;
        }
        catch(ArithmeticException|ArrayIndexOutOfBoundsException|NullPointerException e)
        {
            System.out.println("Exception Caught: " +e);

        }
    }
}
