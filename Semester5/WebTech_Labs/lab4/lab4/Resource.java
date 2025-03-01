package lab4;

public class Resource {

private int field_resourceId;
 public   
Resource(int num){
    field_resourceId=num;
}
@Override
protected void finalize(){
System.out.print("Resource ID =");
System.out.println(field_resourceId);

}
public static void main(String[] args) {
    Resource obj =new Resource(12);
    System.out.println(obj.field_resourceId);
    obj=null;
    System.gc();

}
}
