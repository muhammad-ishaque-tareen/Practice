package Lab4.Task4;

public class Statistics {
    static void CalAndAvg(int ...args)
    {
        int sum=0;
        double avg=0f;
       
        for(int i=0; i<args.length; ++i)
        {
            sum+=args[i];
            
        }
        avg= sum/args.length;
        
        System.out.println("Sum is :" + sum);
        System.out.println("Average is: " + avg);
    }
    public static void main(String[] args) {
        // CalAndAvg(null);
        CalAndAvg(6 );
        CalAndAvg(2 ,2);
        CalAndAvg();
    }
}