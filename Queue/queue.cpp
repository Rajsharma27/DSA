#include<iostream>
using namespace std;

class queue{
    int size;
    int front;
    int rear;
    int *Q;

    public:
    queue(int length){
        size = length;
        Q = new int[size];
        int front = -1;
        int rear = -1;
    }
    void enqueue(queue* q, int x){
        if(q->rear == q->size){
            cout<<"array is full"<<endl;
        }

        else{
            q->rear++;
            q ->Q[q->rear] = x;
        }
    }
    int dequeue(queue* q, int x){
        if(q->front==q->rear){
            cout<<'array is empty'<<endl;
        }
        else{
            q->front++;
            x = q->Q[q->front];
        }
        return x;
    }
};


int main(){

}