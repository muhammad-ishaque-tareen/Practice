package lab4;

public class Stack {
    private int arr[];
    private int size;
    private int capacity;
    private int top;

    private void resize() {
        capacity *= 2;
        int newArr[] = new int[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        arr = newArr;
    }

    public Stack() {
        capacity = 2;
        size = 0;
        top = -1;
        arr = new int[capacity];
    }

    public Stack(int iCapacity) {
        capacity = iCapacity;
        size = 0;
        top = -1;
        arr = new int[capacity];
    }

    public void push(int val) {
        if (size == capacity) {
            resize();
        }
        arr[++top] = val;
        size++;
    }

    public int pop() {
        if (size == 0) {
            System.out.println("Stack is empty Cannot pop.");
            return -1;
        }
        int value = arr[top--];
        size--;
        return value;
    }

    public static void main(String[] args) {
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
