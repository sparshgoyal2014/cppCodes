#include<iostream>
using namespace std;

void sample(int x, int y) {
    x=y;
    cout << x << "  " << y << endl;
} // tpo sparate expressions we use ";" not this 

int main(){
    int a = 2;
    int b = 3;

    sample(a,b);
    
    return 0;
}