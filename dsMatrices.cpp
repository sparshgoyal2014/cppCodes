#include<iostream>
using namespace std;

void setData(int arr[], int i, int j, int x){
    if(i == j){
        arr[i-1] = x;
    }
}

int getData(int arr[], int i, int j){
    if(i != j){
        return 0; 
    }else{
        return arr[i-1];
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                cout << arr[i] << " ";
            }else{
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }
}

int main(){
    int arr[5];

    setData(arr, 1, 1, 5);
    display(arr, 5); 

    return 0;
}