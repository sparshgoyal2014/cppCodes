#include<iostream>
using namespace std;

// void display2(){
//     cout << " this is display 2 function with prototype declared outside the main function" << endl;
//     display();  // erro dispay was not declared in this scope
// }

void display2();

int main(){
    void display();

    display();
    display2();

    int x = 2;
    return 0;
}

void display2(){
    cout << " this is display 2 function with prototype declared outside the main function" << endl;
    display();  // erro dispay was not declared in this scope  // we can't use here because display() is not declared in this scope
    // cout << x << endl;   // we can't use x here we x is not declared in this scope
}


void display(){
    cout << " this is display function with prototype declared insde main function" << endl;
    return ;
}





