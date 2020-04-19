#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;
};

class LinkedList{
    private:
    Node *first;

    public:
    LinkedList(){
        first = NULL;
    }

    LinkedList(int arr[], int n);

    ~LinkedList();
    void display();
    void insert(int index, int x);
    int deleteEle(int index);
    int length();
};





int main(){

    return 0;
}


// check bari's video writting c++ class