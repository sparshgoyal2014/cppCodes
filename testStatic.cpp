#include<iostream>
using namespace std;

int display(){
    static int x = 0;
    x++;

    return x;
}

int main(){
    cout << display()<< display()<<display() << endl;

    for(int i=0; i<5; i++){
        static int y = 0;
        ++y;
        cout << y << endl;
    }
    

    return 0;
}


