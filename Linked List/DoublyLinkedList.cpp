#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this-> data = data;
        this-> prev = NULL;
        this-> next = NULL;
    }
    ~node(){
        int val = this->data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
    }
};
void print(node* &head){
    node* temp = head;
    
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(node* head){
    int len=0;
    node* temp=head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertathead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertattail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail->prev = tail;
    tail = temp;
}

void insertatposition(node* &head, node* &tail, int position, int d){
    if(position==1){
        insertathead(head, d);
        return ;
    }

    node* temp = head;
    int cnt=1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp->next == NULL){
        insertattail(tail, d);
    }
    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
}

void deletenode(int position, node* &head, node* &tail){
    //deleting 1st node
    if(position==1){
        node* temp=head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
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
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}


int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    cout<<getlength(head)<<endl;
    insertathead(head, 11);
    print(head);
    insertattail(tail, 9);
    print(head);
    insertattail(tail, 13);
    print(head);
    insertatposition(head, tail, 2, 22);
    print(head);
    deletenode(4,head, tail);
    print(head);

}