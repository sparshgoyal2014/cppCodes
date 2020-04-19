#include<iostream>
#include<cstring>
using namespace std;

struct Node{
    char data;
    Node* next;
};

Node* top = NULL;

int pre(char x){
    if(x == '+' || x == '-')
        return 1;
    else if(x == '*' || x == '\\')
        return 2;
    return 0;
}

bool isOperand(char x){
    if(x == '+' || x == '-' || x == '*' || x == '\\')
        return false;
    else
        return true;
}

char* InToPost(char *infix){
    int i=0, j=0;
    char *postfix;
    int len = strlen(infix);
    postfix = new char[len=1];

    while(infix[i] != '\0'){
        if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else{
            if(pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else
                postfix[j++] = pop();
        }
    }

    while(top != NULL){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';

}

int main(){
    char *infix = "a+b*c";
    char *postfix;

    return 0;
}