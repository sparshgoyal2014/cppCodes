#include<iostream>
using namespace std;

class test{
    private:
    int a;
    int b;

    public:
    int c = 30;

    static int count; // only one type memory allocation ..
    // and the commmon memry is used by all the objects....
    // for more see bari's video static data members... 
    //common for all the objects of this class...
    test(){
        a=10;
        b=20;

        count++;
    }

    static int getCount(){
        // a++ // wrong (because static member fuunction can only access static data me,mbers...)
        return count ;
    }
};

int test:: count = 0;


int main(){

   //cout << test:: c << endl;


    cout << test:: getCount() <<endl;
    test t1;
    cout << t1.getCount() << endl;
    test t2;

    cout << t1.count << " " << t2.count << endl;
    cout << test:: count << endl;   // if the data members are publically defined ...
    //then they can be called by using objects and by using class also....
    cout << t2.getCount() << endl;
   // cout << test::c <<endl;

    return 0;

}