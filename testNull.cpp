#include<iostream>
using namespace std;

void display(){
    cout << "this is dis[pplay function" << endl;
    return ;
}

int main(){
    display();
    void *p = NULL;
    cout << p << endl;
    return 0;
}