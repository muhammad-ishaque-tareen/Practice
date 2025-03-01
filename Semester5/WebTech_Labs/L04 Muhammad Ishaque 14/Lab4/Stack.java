
package Lab4;

class Stack
{
    private int array[];
    private int size;
    private int capacity;
    private int top;
    private void reSize()
    {
     capacity*=2;
     int array1[]=new int[capacity];
     for(int i=0;i<size;++i)
     {
        array1[i]=array[i];
     }
     array=array1;
    }

    public Stack()
    {
        size=0;
        capacity=2;
        top=-1;
        array=new int[capacity];
    }
    public Stack(int _cap)
    {
        capacity=_cap;
        size=0;
        top=-1;
        array=new int[capacity];
    }
    void push(int val)
    {
      if (isFull())
      {
        reSize();
      }
      array[size++]=val;
    }
    boolean isEmpty()
    {
        return(size!=capacity);
    }
    boolean isFull()
    {
        return(size==capacity);
    }
   public int gettop()
    {
        return 1;
    }
    public int pop() {
        if (size == 0) {
            System.out.println("Stack is empty Cannot pop.");
            return -1;
        }
        int value = array[top--];
        size--;
        return value;
    }
    

    public static void main(String[] args) 
    {
        Stack stack = new Stack();
        Stack stack1 = new Stack();

        stack.push(5);
        stack1.push(12);
        System.out.println("Pushed element to stack1: 12");
        stack.push(10);
        stack.push(15);

        System.out.println("Popped element: " + stack.pop());
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Popped element: " + stack.pop()); 
    }

}
