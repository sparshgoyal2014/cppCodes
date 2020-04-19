#include <iostream>
using namespace std;

int helloFun(int num){

    cout << "Hello my Function.....!!!!!" <<  ""  << num << endl;
    return 0;
}

int main(){

   /* helloFun();
    int x= helloFun();
    cout << endl
         << helloFun() << endl;

         cout<<helloFun()<<endl;*/

    for(int i = 0 ;i<10;i++){
        helloFun(i);
    }

    return 0;
}