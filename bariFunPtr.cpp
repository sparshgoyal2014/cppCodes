#include<iostream>
using namespace std;

void display(){
    cout << "void" << endl;
}

void display(int a){
    cout << a << endl;
}

void display(int a,int b){
    cout << a << " "<< b << endl;
     
}

int main(){

   /* display();
    display(1);
    display(1,2);
    */

   void (*fPtr)();
   fPtr = display;
   (*fPtr)();

   void (*fPtr2)(int);
   fPtr2 = display;
   (*fPtr2)(1);

   cout << fPtr << endl;
   cout << fPtr2 << endl;
   // cout << fptr() << endl;   // fptr was not declared in this scope.....
   // cout << fptr << endl;     // fptr was not declared in this scope.....

    return 0;

}
