package Lab3;

public class CylinderComputation {
    public static void main(String args[])
    {

    double radius=3.2,height=3.4, surfaceArea, baseArea, volume;
    double pie=3.14;

    volume =        pie*radius*radius*height;
    surfaceArea =   (2*pie*radius*height)+(2*pie*radius*radius);
    baseArea =      pie*radius*radius;

    System.out.println("Cylinder BaseArea , Volume , SurfaceArea are as Below:");
    System.out.println("Volume :" + volume);
    System.out.println("Surface Area :" + surfaceArea);
    System.out.println("BaseArea :" + baseArea);
    }
}
