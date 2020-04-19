#include<iostream>
using namespace std;

class student{
    public:

    int roll_no;

    static int addNo;

    student(){
        addNo++;
        roll_no = addNo;
    }

    int getRollNo(){
        return roll_no;
    }
};

int student:: addNo = 0;

int main(){
    student s[50];
    for(int i=0;i<50;i++){
        cout << s[i].getRollNo() << endl;
    }

    return 0;
}