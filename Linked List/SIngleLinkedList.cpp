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
void insertatHead(node* &head, int d){  // refrence as have to make changes in the original node
    //new node create
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void insertattail(node* &tail, int d){
    //new node here
    node* temp = new node(d);
    tail -> next = temp;
    tail = tail -> next;
}
void insertatposition(node* &head,node* &tail, int positon, int d){
    if(positon==1){
        insertatHead(head,d);
        return;
    }
    node* temp = head;
    int cnt=1;

    while(cnt<positon-1){
        temp=temp->next;
        cnt++;
    }
// if inserting at last element then we have to update tail also otherwise it will remain at second last element only
    if(temp -> next==NULL){
        insertattail(tail,d);
        return;
    }
    //creating a node to insert
    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
}
void deletenode(int position, node* &head){
    //deleting 1st node
    if(position==1){
        node* temp=head;
        head = head -> next;
        temp->next = NULL;
        //free memory
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(node* &head){
    node* temp = head;
    
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout << endl;
}
int max(node* temp){
    int m = INT32_MIN;
    while(temp){
        if(temp->data > m)
            m = temp->data;
            temp = temp->next;
    }
    return m;
}
void removeduplicates(node* &head){
    node* p  = head;
    node* q = head->next;
    
    while(q != NULL){
    if(p->data != q->data){
        p=q;
        q = q->next;
    }
    else{
        p->next = q->next;
        delete q;
        q = p->next;
    }
}
}
void reverselist(node* &head){
    node* p = head;
    node* q = NULL;
    node* r = NULL;
    while(p != NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head = q;
}
int main(){
    node* node1 = new node(10);
    //cout<<node1 -> data<<endl;
    //cout<<node1 -> next<<endl; 

    node* head = node1;
    node* tail = node1;
    print(head);

    insertattail(tail, 12);
    print(head);
    insertattail(tail, 15);
    print(head);
    insertatposition(head,tail,3,22);
    print(head);
    insertatposition(head,tail,1,1);
    print(head);
    deletenode(1,head);
    print(head);
    insertattail(tail, 40);
    insertattail(tail, 40);
    print(head);
    removeduplicates(head);    
    print(head);
    reverselist(head);
    print(head);
}