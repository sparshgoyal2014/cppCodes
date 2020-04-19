#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *first = NULL;

void create(int arr[], int n){
    Node *t, *last;
    first = new Node;
    first->data = arr[0];;
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

void testdisplay(Node *p){
    cout << ((p->next)->next)->data << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    create(arr, 5);
    testdisplay(first);

    return 0;
}
