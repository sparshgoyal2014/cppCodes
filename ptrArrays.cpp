#include<iostream>
using namespace std;


int main(){

    int arr[5] = {0,1,2,3,4};
    int (*ptr)[5] = {&arr[0] , &arr[1] , &arr[2] , &arr[3] , &arr[4]};
   /* for(int i=0 ; i<5 ;i++){
        ptr[i] = &arr[i];
    }
*/
    for(int j=0;j<5;j++){
        cout << *ptr[j] << " " ;
    }


    return 0;
}