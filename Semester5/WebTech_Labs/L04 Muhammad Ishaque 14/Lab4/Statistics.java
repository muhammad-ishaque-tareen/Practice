package Lab4;
class Statistics
{
    static void calculateSumAndAverage(int ...v)
    {
        if (v.length == 0) {
            System.out.println("No numbers");
            return;
        }

        int sum = 0;
        for (int i = 0; i < v.length; i++) {
            sum += v[i];
        }

        double average = sum / (double) v.length;

        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);
    }
   
    public static void main(String[] args)
    {
        Statistics st1=new Statistics();
        st1.calculateSumAndAverage(3,5,4,6,5,6,7);
    }
}