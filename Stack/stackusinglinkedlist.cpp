#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class stack{
    private:
    Node *top;

    public:
    stack(){
    top=NULL;}
    void push(int x);
    int pop();
    void display();

};
void stack::push(int x){
    Node *t = new Node;
    if(t==NULL)
    cout<<"stack is full";
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
int stack::pop(){
    int x=-1;
    if(top==NULL)
    cout<<"stack is empty";
    else{
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}
void stack::display(){
    Node *p=top;
    while(p != NULL){
        cout<<p->data<<" ";
        p=p->next; 
    }
    cout<<endl;
}

int main(){
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.display();

    stk.pop();
    stk.display();

}