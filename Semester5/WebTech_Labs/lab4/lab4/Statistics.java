package lab4;

public class Statistics {

    public static void calculateSumAndAverage(int... numbers) {
        if (numbers.length == 0) {
            System.out.println("No numbers");
            return;
        }

        int sum = 0;
        for (int i = 0; i < numbers.length; i++) {
            sum += numbers[i];
        }

        double average = sum / (double) numbers.length;

        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);
    }

    public static void main(String[] args) {
        System.out.println("No arguments");
        calculateSumAndAverage();

        System.out.println("One argument");
        calculateSumAndAverage(5);
        System.out.println("Multiple arguments");
        calculateSumAndAverage(1, 2, 3, 4, 5);
    }
}
