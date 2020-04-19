#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *first = NULL;
Node *second = NULL;
Node *third = NULL;

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

void create2(int arr[], int n){
    Node *t, *last;
    second = new Node;
    second->data = arr[0];;
    second->next = NULL;
    last = second;

    for(int i=1; i<n; i++){
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

// *******************
// for traversing or iterating through Linked List we have O(n)  ---> timeComplexity
// for memory stack we have n+1 calls so n+1 activation records are created on to the stack...

void display(Node *p){
    while(p != NULL){
        cout << p->data << "  ";
        p = p->next;
    }
}

void rDisplay(Node *p){
    if(p != NULL){
        cout << p->data << " ";
        rDisplay(p->next);
    }
}

void display2(Node *p){
    if(p != NULL){
        display2(p->next);
        cout << p->data << " ";

    }
}

int countingNodes(Node *p){
    int count=0;
    while(p != NULL){
        count++;
        p = p->next;
    }

    return count;

} // timComplexity = O(n)
// spaceComplexity = O(1)

int rCount(Node *p){
    int count = 0;
    if( p == 0){
        return count;
    }else{
        return rCount(p->next) + 1;
    }

}

int sumLL(Node *p){
    int sum = 0;
    while(p != NULL){
        sum = sum + p->data;
        p= p->next;
    }

    return sum;
}

int rSum(Node *p){
    int sum = 0;
    if(p == NULL){
        return 0;
    }else{
        p = p->next;
        return rSum(p->next) + p->data; 
    }
}

int maxElementInLL(Node *p){
    int max = p->data;
    while(p != NULL){
        if(p->data > max){
            max = p->data;
        }

        p = p->next;
    }

    return max;
}

int rMax(Node *p){
    int max = 0;
    if(p == 0){
        return max;
    }else{
        int x  = rMax(p->next);
        if(x>(p->data)){
            return x;
        }else{
            return p->data;
        }
    }
}

// binary search is not for LL;
// so we'll perform only linear search;

Node* Search(Node *p, int key){
    while(p != NULL){
        if(key == p->data){
            return p;
        }
        p = p->next;
    }

    return NULL;
}

Node* rSearch(Node*p, int key){
    if(p == NULL){
        return NULL;
    }

    if(key == p->data){
        return p;
    }else{
        return rSearch(p->next,key);
    }
}


// for previous node pointer we hav another q pointer which follows p****
Node* searchMoveToHead(Node* p, int key){
    Node* q = NULL;
    while(p != NULL){
        if(key == p->data){
            q->next = p->next;
            p->next = first;
            first = p;

            return p;
        }

        q = p;
        p = p->next;
    }

    return NULL;
}

void insertBeforFirst(Node* p, int x){
    Node *t = new Node;
    t->data = x;
    t->next = first;
    first = t;
}  // time complexiy ---> O(1)


void insertNode(Node* p, int index, int x){
    Node* t;

    if(index<0 || index > countingNodes(p))
        return;
    t = new Node;
    t->data = x;

    if(index == 0){
        t->next = first;
        first = t;
    }else{
        for(int i=0;i<index-1;i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;

    }
}

void insertLast(int x){
    Node* p = first;
    Node* last;
    while(p != NULL){
        p = p->next;
    }

    last = p;
    Node* t = new Node;
    t->data = x;
    t->next = NULL;

    if(first == NULL)
        first = last = t;
    else{
        last->next = t;
        last = t;
    }

}

void insertInSortedLL(Node *p, int x){
    Node* t = new Node;
    t->data = x;
    while(p->data <= x){
        p = p->next;
    }

    t->next = p->next;
    p->next = t;
    
}

void insertSort(Node *p, int x){
    Node *q = NULL;
    Node *t;
    t = new Node;

    t->data = x;
    t->next = NULL;

    if(first == NULL){
        first = t;
    }else{
        while(p && p->data < x){
            q = p;
            p = p->next;
        }if(p == first){
            t->next = first;
            first = t;
        }else{
            t->next = q->next;
            q->next = t;
        }
    }

    
}

int deleteNode(Node *p, int index){
    Node *q;  // tail pointer
    int x = -1;

    if(index < 1 || index > countingNodes(p)){
        return -1;
    }else{
        if(index == 1){
            q = first;
            x = first->data;
            first = first->next;
            delete q;
            return x;
        }else{
            for(int i = 0;i< index-1; i++){
                q = p;
                p = p->next;
            }

            q->next = p->next;
            x = p->data;

            return x;  // deleted value data we are returnoing
        }
    }
}

bool checkSorted(Node *p){
    while(p != NULL && p->next != NULL){
        if((p->data) > (p->next)->data){
            return false;
        }

        p = p->next;
    }

    return true;
}

bool checkSorted2(Node *p){
    int x = p->data;
    p = p->next;
    while(p != NULL){
        if(p->data < x){
            return 0;
        }

        x= p->data;
        p= p->next;
    }

    return 1;

}

void removeDuplicates(Node *p){
    Node *q = p->next;  // q is ahead and p is taken as tail(following pointer)

    while(q != NULL){
        if(p->data != q->data){
            p = q;
            q = q->next;
        }else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void reverseLL(Node *p){
    int arr[countingNodes(first)];
    for(int i=0; i<countingNodes(first); i++){
        arr[i] = p->data;
        p = p->next;
    }

    p = first;

    for(int i=countingNodes(first)-1; i>=0; i--){
        p->data = arr[i];
        p = p->next;
    }


}

void reverseLLWithPointers(Node *p){
    Node *q = NULL, *r = NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    
    first = q;
}

void reverseLLUsingRecursion(Node *q, Node *p){  // q pointer is tail of p;
    if(p != NULL){
        reverseLLUsingRecursion(p, p->next);
        p->next = q;
    }else{
        first = q;
    }
}

void concatenateLL(Node *x, Node *y){

    third = x;
    while(x->next != NULL){
        x = x->next;
    }
    x->next = y;
}

void mergeLL(Node *p, Node *q){  // merging means make third LL which is sorted from two sorted LL's;
    Node *last;
    if(p->data < q->data){
        third = last = p;
        p = p->next;
        third->next = NULL;
    }else{
         third = last = q;
        q = q->next;
        third->next = NULL;
    }

    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p= p->next;
            last->next = NULL;
        }else{
             last->next = q;
            last = q;
            q= q->next;
            last->next = NULL;
        }
    }

    if(p){
        last->next = p;
    }

    if(q){
        last->next = q;
    }
}

bool isLoop(Node *f){
    Node *p, *q;
    p = q = f;
    do{
        p = p->next;
        q= q->next;

        q= q != NULL ? q->next: NULL;

    }while(p && q && p != q);

    if(p == q)return true;
    else return false;

}

void findMiddle(Node *p){
    Node *q = first;
    while(q){
        q = q->next;
        if(q){
            q = q->next;
        }

        if(q){
            p = p->next;
        }
    }

    cout << "Your middle node's data is: " << p->data << endl; 
}



int main(){
    
    Node *t1, *t2;

    int arr[] = {10,20,30,40,50};
    create(arr, 5);

    // t1 = first->next->next;
    // t2 = first->next->next->next->next;
    // t2->next = t1;

    // cout << " is my LL a Loop : " << isLoop(first) << endl;

    findMiddle(first);

    return 0;

}