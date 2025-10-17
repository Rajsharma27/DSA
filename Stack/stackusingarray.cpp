#include<iostream>
using namespace std;
class stack{
    int top;
    int size;
    int *arr;

    public:
    stack(int length){
        size = length;
        arr = new int[size];
        top = -1;
    }

    void push(int data) {
        if (top == size - 1) {
            std::cout << "Stack Overflow! Cannot push " << data << std::endl;
            return;
        }
        top++;
        arr[top] = data;
        std::cout << data << " pushed to stack." << std::endl;
    }
    void pop() {
        int x = -1;
        if (top == - 1) {
            std::cout << "empty stack " << std::endl;
            return;
        }
        x = arr[top];
        top--;
        std::cout << x << " popped from stack." << std::endl;
    }
    int peek(int pos){
        int x=-1;
        if((top-pos+1)<0){
            cout<<"invalid"<<endl;
        }
        else{
            x = arr[top-pos+1];
        }
        return x;
    }
    void display() {
        if (top == -1) {
            cout << "\nStack is empty." << endl;
            return;
        }
        cout << "\n--- Stack Elements (Top to Bottom) ---" << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
        cout << "---------------------------------------" << endl;
    }
};
stack* createStack() {
    int size;
    std::cout << "Enter the desired size of the stack: ";
    std::cin >> size;

    
    stack* st = new stack(size);
    std::cout << "Stack with capacity " << size << " has been created." << std::endl;
    
    return st;
}

int main(){

    stack* st = createStack();
    cout << "\n--- Pushing Elements ---" << endl;

    st->push(10);
    st->push(20);
    st->push(30);

    cout << "Element at position 1 (top): " << st->peek(1) << endl; 
    cout << "Element at position 3 (bottom): " << st->peek(3) << endl; 

    
    st->push(40);

    cout << "\n--- Popping Elements ---" << endl;

    st->pop();
    st->pop();

    cout << "\n--- Testing Underflow ---" << endl;

    st->display();

}
