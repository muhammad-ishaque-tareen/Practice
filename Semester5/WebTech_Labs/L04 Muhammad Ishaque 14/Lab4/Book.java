package Lab4;

public class Book {
    String title;
    String author;
    double price;
    static int stockCount = 0;

    public Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public void buyBook() {
        if (stockCount > 0) {
            stockCount--;
        } else {
            System.out.println("End stock");
        }
    }

    public void restockBooks(int count) {
        stockCount += count;
    }

    public static void main(String[] args) {
        Book book1 = new Book("DSA", "Shafique Ur Rehman", 5000.99);
        Book book2 = new Book("Operating System", "Naeem Akhtar", 8500.99);

        book1.restockBooks(10);
        book2.restockBooks(5);

        System.out.println("Stock count after restocking: " + stockCount);

        book1.buyBook();
        book2.buyBook();

        System.out.println("Stock count after buying books: " + stockCount);
    }
}
