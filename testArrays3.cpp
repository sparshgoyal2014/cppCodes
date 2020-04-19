#include<iostream>
using namespace std;

int main(){
    char arr[10];

    arr[0] = 'A';
    arr[1] = 'B';
    cout << arr << endl;

    char arr2[20];
    arr2[0] = 'k';
    arr2[1] = 'y';

    cout << arr2 << endl;

    int arr3[10];
    arr3[0] = 1;
    
    for(int i=0; i<10; i++){
        cout << arr3[i] << " " ;
    }
    return 0;

}