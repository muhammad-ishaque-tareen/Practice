package Lab4.Task3;

public class Stack {
    int [] arr = new int[ 10 ];
    int capacity=0;
    void pop(){
       --capacity;
    }
    void push(int num)
    {
        arr[capacity++]= num;
    }
    void print()
    {
        for(int x=0; x<capacity; ++x){
            System.out.print(arr[x] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Stack obj = new Stack();
        obj.push(2);
        obj.push(5);
       obj.push(3);
        obj.print();
        obj.pop();
        obj.print();

    }
}
