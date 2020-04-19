#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int main(){
    Node first;
    Node sec;
    Node third;

    first.data = 5;
    first.next = &sec;

    sec.data = 6;
    sec.next = &third;

    third.data = 8;
    third.next = NULL;

    Node *p = &first;

    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}