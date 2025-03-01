package Lab4;

public class Printer {

    public void printValues(int ...value) {
        System.out.print("Integers = ");
        for (int i = 0; i < value.length; i++) {
            System.out.print(value[i] + " ");
        }
        System.out.println();
    }

    public void printValues(double... values) {
        System.out.print("Doubles =  ");
        for (int i = 0; i < values.length; i++) {
            System.out.print(values[i] + " ");
        }
        System.out.println();
    }

    public void printValues(String... _values) {
        System.out.print("Strings =  ");
        for (int i = 0; i < _values.length; i++) {
            System.out.print(_values[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Printer printer = new Printer();

        System.out.println("Print integer values:");
        printer.printValues(1, 2, 3);

        System.out.println("Print  double values:");
        printer.printValues(1.5, 2.5, 3.5);

        System.out.println("Print string values:");
        printer.printValues("Hello", "World");
    }
}
