#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0,1,2,3,4};

    int (*ptr)[5] = &arr;
    cout << *ptr[0]  << " " << *ptr[2]<< endl;

    return 0;

}