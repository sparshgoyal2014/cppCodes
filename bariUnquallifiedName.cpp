#include<iostream>
using namespace std;

int x = 3;

namespace A{
    int x = 1;
}

namespace B{
    int x = 2;
}



int main(){
    cout << x << endl;

    return 0;

}