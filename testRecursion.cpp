#include<iostream>
using namespace std;

void display(){
    int x = 1;
    cout << "this is display function" << endl;
    if(x<5){
        x++;
        display();
    }

}

int main(){
    display();

    return 0;
}