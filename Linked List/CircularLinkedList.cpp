#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data=data;
        this -> next = NULL;
    }
    ~node(){
        int value = this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
    };

void insertnode(node* &tail, int element, int d){
    if(tail == NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        node* curr = tail;
        while (curr->data != element)
        {
            curr = curr->next; 
        }
        
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node* &tail){
    node* temp = tail;

    do{
        cout<< tail->data<< " ";
        tail = tail->next;
    }
    while (tail != temp);
    cout<<endl;
}

void deletenode(node* &tail, int value){
    if(tail == NULL){
        cout<< "list is empty"<<endl;
        return;
    }
    else{
        node*prev = tail;
        node*curr = tail->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        if(curr == prev){
            tail = NULL;
        }
        if(tail == curr){
            tail=prev;
        }
        curr->next=  NULL;
        delete curr;
    }
}



    int main(){
        node* tail = NULL;
        
        insertnode(tail, 5, 3);
        print(tail);
        insertnode(tail, 3, 5);
        print(tail);
        insertnode(tail, 5, 7);
        print(tail);
        insertnode(tail, 5, 6);
        print(tail);

    }