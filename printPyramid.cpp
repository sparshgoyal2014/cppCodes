#include<iostream>
using namespace std;

int main(){
    char str[]= "HelloWorld";

    for(int i=0; i< sizeof(str); i++){
        for(int j=0; j<i; j++){
            cout << str[j];
        }

        cout << endl;
    }


    return 0;
}