#include<iostream>
using namespace std;

class Innova{
    public:

    static int price;

    Innova(){

    }

    static int getPrice(){
        return price;
    }
};

int Innova:: price = 20;


int main(){
    cout << Innova:: getPrice() << endl;
    Innova my;

    cout << my.getPrice() << endl;

    return 0;
    
}
