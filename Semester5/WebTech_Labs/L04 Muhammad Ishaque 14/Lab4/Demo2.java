package Lab4;
class overloadedMethod
{
    void test()
    {
        System.out.println("No Parameters");
    }
    void test(int a)
    {
        System.out.println("One Parameter");
    }
    void test(int a, int b)
    {
        System.out.println("Two Parameters");
    }
    double test(double a)
    {
        System.out.println(" double a:" +a);
        return a*a;
    }
}
class Demo2
{
    public static void main(String[] args)
    {
        overloadedMethod ob1=new overloadedMethod();
        ob1.test();
        ob1.test(78.6);
        ob1.test(78,98);
    }
}
