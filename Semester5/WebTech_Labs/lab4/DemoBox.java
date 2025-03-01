package Lab4;

public class DemoBox {
    int age;
    void test()
    {
        System.out.println("test method without parameter:");
    }

     void test(int num)
     {
        System.out.println("Number Test " + num);
     }

     void test(float f1)
     {
        System.out.println("Float test ;" + f1);
     }

     void test(float f1,float f2)
     {
        System.out.println("Float Two numbers:"+ f1 +f2 );
     }

     void Object(DemoBox obj)
     {
        System.out.println("Object Passed:");
     }
    public static void main(String[] args) {
        Box myBox= new Box();
        // myBox.width=20;
        // myBox.height=10;
        // myBox.length=30;
        double volume = myBox.height*myBox.length*myBox.width;
        System.out.println("Volume for Box1:" + volume);
        DemoBox abc = new DemoBox();
        abc.age=10;
        System.out.println("Age is : " + abc.age);
        Box myBox1 = new Box();
        myBox1.height=30;
        myBox1.length=34.3;
        myBox1.width= 10.2;
        //myBox1=myBox;
        volume= myBox1.height*myBox1.width*myBox1.length;
        System.out.println("Volume for Box2:" + volume);

        Box mybox3 = new Box(3,4,5);

        abc.test();
        abc.test(4);
        abc.test(3.0f);
        abc.test(4.0f, 5.0f);
        abc.Object(abc);

        
    }
}
