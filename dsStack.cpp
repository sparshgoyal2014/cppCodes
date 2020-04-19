// stack workd on the principle LIFO : last in first out...i.e the last element which was added will go out(or delete first).
#include<iostream>
#include<cstring>
using namespace std;

struct Stack{
    int size;
    int top;
    int *arr;
};

void push(Stack *s, int x){
    if(s->top == s->size - 1){
        cout << "Stack overflow...." << endl;
    }else{
        s->top++;
        s->arr[s->top] = x;
    }
}

int pop(Stack *s){
    int x = -1;
    if(s->top == -1){
        cout << "Stack is already empty : Stack underflow" << endl;
    }else{
        x = s->arr[s->top];
        s->top--;
    }

    return x;

}

int peek(Stack s, int pos){
    int x = -1;
    if((s.top-pos+1)<0)
        cout << " Invalid Position :" << endl; 
    else{
        x = s.arr[s.top-pos+1];
    }

    return x;
}

int stackTop(Stack s){
    if(s.top == -1)
        return -1;
    else
        return s.arr[s.top];
}

bool isEmpty(Stack s){
    if(s.top == -1)
        return true;
    else
        return false;
}

bool isFull(Stack s){
    if(s.top == s.size-1)
        return true;
    else
        return false;
}

bool isBalance(char *str){
    Stack s;
    s.size = strlen(str);
    s.top = -1;
    s.arr = new int[s.size];
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 40){
            push(&s, str[i]);
        }
        if(str[i] == 41){
            if(s.top == -1){
                return false;
            }
            pop(&s);
        }
    }

    if(s.top == -1){
        return true;
    }
}

int main(){
    // Stack st;
    // cout << "enter size of stack : " << endl;
    // cin>> st.size;

    // st.arr = new int[st.size];
    // st.top = -1;

    char str[100] = "aa(jjd)()()";
    cout << isBalance(str) << endl;

    // condition for empty is if(top == -1) 
    // condition for full is if(top = size-1)
}