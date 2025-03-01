package Lab4.Task5;

public class Printer {
    static void printval(int... args)
    {
        for(int num=0; num<args.length; ++num){
            System.out.print(args[num]+ " ");
        }
        System.out.println();
    }
    static void printval(double... args)
    {
        for(int i=0; i<args.length; ++i)
        {
            System.out.print(args[i] + " ");
        }
        System.out.println();
    }
    static void printval(String... args){
        for(int i=0;i<args.length; ++i)
        {
            System.out.print(args[i]+ " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        printval(1,2,3);
        printval(1.2,1.3,1.4);
        printval("Aftab","Gul","Siraj");

    }
}
