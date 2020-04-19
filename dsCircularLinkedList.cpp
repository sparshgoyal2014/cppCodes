#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;

void createCLL(int arr[], int n){
    Node *t, *last;
    head = new Node;
    head->data = arr[0];
    head->next = head;
    last = head;

    for(int i=1; i<n; i++){
        t = new Node;
        t->data = arr[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(Node *h){
    do{
        cout << h->data << " ";
        h = h->next;
    }while(h != head);
    cout << endl;
}

int length(Node *p){
    int sum = 0;
    do{
        sum++;
        p = p->next;
    }while(p != head);
    return sum;
}

void insertInCircular(Node *p, int index, int x){
    Node *t;

    if(index<0 || index>length(p))
    
    if(index == 0){
        t = new Node;
        t->data = x;
        if(head == NULL){
            head = t;
            head->next = head;
        }else{
            while(p->next != head)p = p->next;
            p->next = t;
            t->next = head;
            head = t;
        }
    }else{
        for(int i=0;i<index-1;i++){
            p = p->next;
        }
        t = new Node;
        t->next = p->next;
        p->next = t;
    }
}

int main(){
    int arr[] = {2,3,4,5,6};
    createCLL(arr, 5);
    display(head);

    return 0;
}