#include<iostream>
using namespace std;

int fun(int a){
    int x;
    return x+a;
}

int main(){
    int arr[5] = {1,2,3};   // remaining will be initialied to 0
    int i=0;
    while( i != 5){      // i is just a index which iterte through all the elements sequentially as mentioned condition here but until when the conditions get wronng
        cout << arr[i] << " " ;
        i++;
    } 

    int arr2[5];
    for(int i=0 ; i<5 ;i++){
        cout << arr2[i] << " "; 
    }

    cout << endl <<arr2[0] << endl; 

    cout << endl;

    int x = 5;

    cout <<fun(x) << endl;



    return 0;
}