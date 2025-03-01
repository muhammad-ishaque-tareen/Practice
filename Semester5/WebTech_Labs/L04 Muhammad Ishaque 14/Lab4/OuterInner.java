package Lab4;
class outer
{
    int a =44;
    void Display()
    {
        System.out.println("Display of Outer Class with a:" +a);
        inner inn1=new inner();
        inn1.Display1();
    }
    class inner
    {
        int b=98;
       void Display1()
       {
        System.out.println("Display of Inner Class with b:"+b);
       }
    }
}
class OuterInner
{
    public static void main(String[] args)
    {
        outer Out1=new outer();
        Out1.Display();
    }
}