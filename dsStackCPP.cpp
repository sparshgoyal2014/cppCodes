#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;
};

class Stack{
    Node* top;

    public:
    Stack(){
        top = NULL;
    }

    void push(int x);
    int pop();
    void display();
};

void Stack:: push(int x){
    Node *t = new Node;
    if(t == NULL){
        cout << "Stack is full " << endl;
    }else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack:: pop(){
    int x = -1;
    if(top == NULL){
        cout << "Stack is empty " << endl;
    }else{
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }

    return x;
}


void Stack:: display(){
    Node *p = new Node;
    while(p != NULL){
        cout << p->data << " " ;
        p = p->next;
    }

    cout << endl;
}

int main(){
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    stk.display();

    return 0;
}