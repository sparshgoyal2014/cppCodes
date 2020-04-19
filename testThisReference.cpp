#include<iostream>
using namespace std;

class Animal{
    public: 

    int number = 1;
    void dispay(){
        cout << "=======================" << endl;
        cout << " This is Animal Class" << endl;
        this->print();
        cout << "=======================" << endl;

    }

    void print(){
        cout << " This is Print method of Animal Class" << endl;
    }
};

class Dog : public Animal{
    public:

    int number = 2;

    void print(){
        cout << "This is print method in Do Class" << endl;
    }
};

int main(){
    Animal* animal = new Animal();
    animal->print();
    animal->dispay();

    Dog* dog = new Dog();
    dog->print();
    dog->dispay();

    Animal* animal2 = new Dog();
    animal2->print();
    animal2->dispay();

    return 0;
}