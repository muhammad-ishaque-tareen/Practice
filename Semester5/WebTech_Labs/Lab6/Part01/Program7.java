package Part01;
public class Program7
{
    public static void main(String[] args) 
    {
        try 
        {
            readFile(); // Will call a method that may throw an exception
        } 
        catch (Exception e) 
        {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
// Method that declares an exception it might throw
    public static void readFile() throws Exception 
    {
        throw new Exception("File not found");
    }
}