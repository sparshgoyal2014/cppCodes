#include<iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(Queue *q, int x){
    if(q->rear == q->size - 1)
        cout << "Queue is full" << endl;
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue *q){
    int x = -1;
    if(q->front == q->rear){
        cout << "Queue is alredy empty" << endl;
    }else{
        q->front++;
        x = q->Q[q->front];
    }

    return x;
}
void display(Queue q){
    for(int i=q.front+1; i<= q.rear; i++){
        cout << q.Q[i] << " ";
    }
    cout << endl;
}

int main(){
    Queue q;
    cout << "enter the size of Queue: ";
    cin>>q.size;
    q.Q = new int[q.size];
    q.front = q.rear = -1;
    enqueue(&q, 10);
    enqueue(&q, 20);
    display(q);

    return 0;
    
}