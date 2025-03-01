package Lab4;

public class Student 
{

    private String name;
    private int rollNumber;
    private double[] grades;

    public Student(String stdName, int stdRollNumber, double[] stdGrades) 
    {
        name = stdName;
        rollNumber = stdRollNumber;
        grades = stdGrades;
    }


    public double calculateGPA() 
    {
        double sum = 0;
        for (int i = 0; i < grades.length; i++) {
            sum += grades[i];
        }
        return sum / grades.length;
    }

    public static void main(String[] args) 
    {
        double[] grades = { 3.5, 4.0, 3.8, 3.9 };
        Student student = new Student("Muhammad Tayyab Saleem", 80, grades);
        System.out.println(
                "GPA of " + student.name + " (Roll No. " + student.rollNumber + "): " + student.calculateGPA());
    }
}
