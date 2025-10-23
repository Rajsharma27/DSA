#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    Node* lchild;
    int data;
    Node* rchild;
};
Node* root = nullptr;

void createTree(){
    Node* p;
    Node* t;
    int x;
    queue<Node*> q;

    cout<<"enter root value: "<<endl;
    cin>>x;
    root  = new Node;
    root->data = x;
    root->lchild = root->rchild = 0;
    q.push(root);

    while(!q.empty()){
        p = q.front();
        q.pop();

        cout<<"enter left child value of: "<< p->data<<endl;
        cin>>x;
        if(x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = nullptr;
            p->lchild = t;
            q.push(t);
        }

        cout<<"enter right child value of:"<<p->data<<endl;
        cin>>x;
        if(x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = nullptr;
            p->rchild = t;
            q.push(t);
        }
    }
}
void preorder(Node* p){
    if(p){
        cout<<p->data<<endl;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(Node* p){
    if (p){
        inorder(p->lchild);
        cout << p->data <<endl;
        inorder(p->rchild);
    }
}

void postorder(Node* p){
    if (p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data <<endl;
    }
}

int main() {
    createTree();

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
