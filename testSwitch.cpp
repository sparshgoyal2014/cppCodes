#include<iostream>
using namespace std;

int main(){
    int x = 2;

    switch(x){
        case 1:{
            cout << "x==1"<< endl;
            break;
        } 

        case 2: {
            cout << "x==2" << endl;
            break;
        }

        default: {
            cout << "this is default case" << endl;
            break;
        }
    }


    if(x==2){
        cout << "this is if x==2" << endl;
    }else if(x==2){
        cout << "this is else if x==2" << endl;
    }else{
        cout << "this is else case" << endl;
    }


    return 0;
}