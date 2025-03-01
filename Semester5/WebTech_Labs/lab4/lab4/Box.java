package lab4;

public class Box {
    private double width;
    private double height;
    private double depth;

    Box(){
        width=0.0;
        height=0.0;
        depth=0.0;
    
    }

    Box(double w,double h,double d){
        width=w;
        height=h;
        depth=d;
    }
    
    double volume(){
        return height*depth*width;
        
    }
    public static void main(String[] args) {
        Box obj = new Box();
        System.out.println("volume of box = "+obj.volume());
        Box obj1=new Box(3.0 ,12.0 ,42.2);
        System.out.println("volume of other values of box = "+obj1.volume());
        
    }
}

