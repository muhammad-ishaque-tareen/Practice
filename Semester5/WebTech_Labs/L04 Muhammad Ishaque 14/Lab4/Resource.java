package Lab4;
public class Resource
{
    int resourceId;
    Resource(int val1)
    {
        resourceId= val1;
    }
    protected void finalize()
    {
        System.out.println("ResourceID : "+resourceId);
    }
    public static void main(String[] args)
    {
        Resource R1=new Resource(34);
        R1.finalize();
        R1=null;
        System.gc();
    }
}
