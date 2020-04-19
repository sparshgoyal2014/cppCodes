#include<iostream>
using namespace std;

int test(int **arr){
    return 2;
}

int main(){
    int arr[5][4];
    test(arr);

    return 0;
}