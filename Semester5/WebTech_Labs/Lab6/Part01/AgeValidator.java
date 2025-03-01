package Part01;
import java.util.Scanner;  

// Custom exception class for invalid age  
class InvalidAgeException extends Exception {  
    public InvalidAgeException(String message) {  
        super(message);  
    }  
}  

public class AgeValidator {  

    // Method that checks if the age is valid  
    public static void checkAge(int age) throws InvalidAgeException {  
        if (age < 18) {  
            throw new InvalidAgeException("Age must be 18 or older");  
        }  
    }  

    public static void main(String[] args) {  
        Scanner scanner = new Scanner(System.in);  
        
        System.out.print("Enter your age: ");  
        int age = scanner.nextInt(); // Read user input  

        try {  
            // Call the method to check the age  
            checkAge(age);  
            System.out.println("Age is valid.");  
        } catch (InvalidAgeException e) {  
            // Catch the custom exception and print the message  
            System.out.println(e.getMessage());  
        }  
        
        scanner.close(); // Close scanner  
    }  
}