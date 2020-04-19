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

    int x;
    return 0;
}

void display(){
    cout << " this is display function with prototype declared insde main function" << endl;
    return ;
}

void display2(){
    cout << " this is display 2 function with prototype declared outside the main function" << endl;
    display();  // erro dispay was not declared in this scope
}



