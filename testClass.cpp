#include<iostream>
using namespace std;

class class2{
    public:
    int length = 10;

    int getLength(){
        return length;
    }
};

int main(){
    class2 r;
    cout << r.getLength() << endl;

    return 0;
}