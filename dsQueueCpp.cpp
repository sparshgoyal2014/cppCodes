#include<iostream>
using namespace std;

class Queue{
    private:
    int size;
    int front;
    int rear;
    int *Q;

    public:
    Queue(){
        front = rear = -1;
        size = 10;
        Q = new int[size];
    }

    Queue(int size){
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    } 

    void enqueue(int x);
    int dequeue();
    void display(); 
};

class Cqueue{
    private:
    int size;
    int front;
    int rear;
    int *Q;

    public:
    Cqueue(){
        front = rear = 0;
        size = 10;
        Q = new int[size];
    }

    Cqueue(int size){
        front = rear = 0;
        this->size = size;
        Q = new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void display();
};



void Queue:: enqueue(int x){
    if(rear == size - 1)
        cout << "Queue full " << endl;
    else{
        rear++;
        Q[rear] = x;
    }
}

int Queue:: dequeue(){
    int x;
    if(front == rear){
        cout << "Queue is empty " << endl;
    }else{
        x = Q[front+1];
        front++;
    }

    return x;
}

void Queue:: display(){
    for(int i= front+1; i<=rear; i++){
        cout << Q[i] << " ";
    }

    cout << endl;
}

void Cqueue:: enqueue(int x){
    if((rear+1)%size == front)
        cout << "Queue is already full " << endl;
    else{
        rear = (rear+1)%size;
        Q[rear] = x;
    }
}

int Cqueue:: dequeue(){
    int x;
    if(rear == front)
        cout << "Queue is empty" << endl;
    else{
        front = (front+1)%size;
        x = Q[front];
    }

    return x;
}

void Cqueue:: display(){
    int i = front+1;
    do{
        cout << Q[i] << " ";
        i = (i+1)%size;
    }while(i != (rear+1)%size);

    cout << endl;
}

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);

    q.display();

    Cqueue cq(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);

    cq.display();


    return 0;
}

// where ever front is pointing,  that space must be left empty in  an array