#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }else{
        return sum(n-1) + n;
    }
}

// int sum(n){
//     return n*(n-1)/2;
// }

int main(){
    cout << sum(10) << endl;  // or you can directly the formula --->  n*(n-1)/2

    return 0;
}