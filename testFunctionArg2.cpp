#include<iostream>
using namespace std;

void display(char arr[]){
    cout << arr << endl;
}

void display2(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){
    char str[100] = "this is string";
    display(str);

    int arr[5] = {1,2,3,4,5};
    display2(arr, 5);

    return 0;
}