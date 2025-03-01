package Part01;
import java.util.Scanner;
public class Program3
{
    public static void main (String[] args)
    {
        Scanner s2=new Scanner(System.in);
        int arr []=new int[5];
        try
        {
            try
            {
                for(int i=0; i<=5; i++)
                {
                    if(i==5)
                    {
                        int x=s2.nextInt();
                        arr[i]=x/0;
                    }
                    int y=s2.nextInt();
                    arr[i]=y;
                }
            }
            catch(ArithmeticException e)
            {
                System.out.println("Exception Caught :" +e);
            }
            arr[15]=40;
         
        }
        
         catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Exception Caught :" +e);
        }
         catch(Exception e)
        {
            System.out.println("Default Caught :" +e);
        }
        System.out.println("Program Continous...");
    }
    
    
}