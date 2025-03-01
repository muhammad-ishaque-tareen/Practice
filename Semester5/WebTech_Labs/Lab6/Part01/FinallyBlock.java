package Part01;
import java.io.*;
 public class FinallyBlock 
 { 
    public static void main(String[] args) 
    { 
        BufferedReader reader = null; 
    try 
    { 
        reader = new BufferedReader(new FileReader("test.txt")); 
        System.out.println(reader.readLine()); 
    } 
    catch (IOException e) 
    { 
        System.out.println("Error reading file: " + e.getMessage());
    } 
    finally 
    {   try
        { 
            if (reader != null) 
            { 
                reader.close(); 
                System.out.println("File closed"); 
            } 
        } 
        catch (IOException e) 
        { 
            System.out.println("Error closing file: " + e.getMessage()); 
        } 
    } 
        System.out.println("Program continues...");     
    } 
}