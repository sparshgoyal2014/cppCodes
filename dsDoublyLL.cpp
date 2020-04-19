#include<iostream>
using namespace std;

struct Node{
    Node *prev;
    int data;
    Node *next;
};

Node *first = NULL;

void create(int arr[], int n){
    Node *t;   // here t stands for temporary
    Node *last;
    
    first = new Node;
    first->data = arr[0];
    first->prev = first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t = new Node;
        t->data = arr[i];
        t->next = NULL;;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(Node *p){
    while(p){
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;
}

int length(Node *p){
    int len = 0;
    while(p != NULL){
        len++;
        p = p->next;
    }

    return len;
}

void insertBeforeFirst(Node *&p, int x){  //reference to the  pointer
    Node *t;
    t = new Node; 
    t->data = x;
    t->prev = NULL;
    t->next = p;
    p = t;
}

void insertInGiven(Node *p,int index, int x){
    Node *t;
    if(index<0 || index>length(p))return;

    if(index==0){
        t = new Node; 
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->prev = p;
        t->next = p->next;

        if(p->next != NULL){
            p->next->prev = t;
        }

        p->next = t;
    }
}

int deleteNode(Node *p, int index){
    Node *q;
    int x;

    if(index<1 || index>length(p))
    return -1;

    if(index==1){
        first = first->next;
        if(first)first->prev = NULL;

        x = p->data;
        delete p;
    }else{
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next)
            p->next->prev = p->prev;
        x = p->data;
        delete p;
    }

    return x;
}

void reverse(Node *p){
    Node *t;
    while(p != NULL){
        t = p->next;
        p->next = p->prev;
        p->prev = t;
        p = p->prev;

        if( p != NULL && p->next == NULL)
            first = p;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    create(arr, 5);
    display(first);
    cout << length(first) << endl;

    // insertBeforeFirst(first, 10);
    // display(first);
    // cout << length(first) << endl;

    // insertInGiven(first, 2, 6);
    // display(first);
    // cout << length(first) << endl;

    deleteNode(first, 1);
    display(first);



    return 0;
}
