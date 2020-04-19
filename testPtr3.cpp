#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0,1,2,3,4};
    int (*ptr)[5];
    ptr = &arr;
    //ptr[1] = &arr[1];
    cout << (*ptr)[0] << " " << (*ptr)[1] << endl;

    return 0; 

}