#include<iostream>
#include<vector>

using namespace std;

/*
class test{
    public:
    test(int a ){
        cout << "test class is .." << a << endl;

    }
};
*/

int main(){
    int x = 1;
    int y = 2;
    int z = 3;
   // vector<int*> list = {};

   //test* ptr = new item(10);

   vector<int *> list;
   list.push_back(&x);
   list.push_back(&y);
   list.push_back(&z);

   vector<int *>:: iterator itr;

   for(itr = list.begin();itr!= list.end();itr++){
       cout << **itr << endl;
   }


   return 0;



}