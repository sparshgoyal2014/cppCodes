#include<iostream>
using namespace std;


int main(){

    int arr[5] = {1,2,3,4,5};
    char str[5];
    for(int i=0;i<5;i++){
        str[i] = static_cast<char>(arr[i]);
    }



    cout << str[4] << endl;
    cout << str; 

    return 0;

}