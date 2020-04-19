#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};

int main(){
    Node *p;
    p = new Node;

    p->data = 10;
    p->next = 0;  // Null; or p = nullptr or NULL

    // // conditions...

    // if(p == NULL) // true if  p = 0;
    // if( p==0)  // true if  p = 0;
    // if(!p)  // true if p=0;
    // if(p != NULL) // if p = poinint to node not null;
    // if(p != 0);
    // if(p);
    // if(p->next == NULL)
    //if(p->next != NULL)
    

    return 0;

}