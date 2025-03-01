package Part01;
import java.util.Scanner;
public class Program1
{
  public static void main (String []args)
  {
    Scanner s1=new Scanner(System.in);
    System.out.println("Enter The First value :");
    int x=s1.nextInt();
    System.out.println("Enter The Second value :");
    int y=s1.nextInt();
    try
    {
        int divide=x/y;
    }
    catch ( ArithmeticException e)
    {
        System.out.println("Exception Caught :" +e);
    }
    System.out.println("Program Continous ");

  }
}
