#include<iostream>
using namespace std;

class test{
    public:
    int age = 19;
    void setAge(int age){
        this-> age = age;
    }

    void getAge(){
        cout << this-> age << endl;
    }
};

int main(){
    test obj1, obj2;
    obj1.setAge(15);
    obj2.setAge(19);

    obj1.getAge();
    obj2.getAge();

    return 0;
}