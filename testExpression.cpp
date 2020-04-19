// #include<iostream>
// using namespace std;

// int fun(int x){
//     cout << x << endl;
//     return x;
// }

// int main(){
//     int result = 2+3*4-15/3;
//     cout << result << endl;

//     cout << "========================" << endl;
//     cout << fun(2) + fun(3) * fun(4) - fun(15) / fun(3) << endl;

//     return 0; 
// }

#include <iostream> 
using namespace std;
  
int x = 0; 
int f1() {

    x = 5; 
    return x; 
} 


int f2() {

    x = 10; 
    return x; 
} 

int main() {
 
    int p = f1() + f2(); 
    printf("%d ", x); 
    return 0; 

}