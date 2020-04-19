#include<iostream>
using namespace std;

int main(){
    int x = 10,y = 0,z;


    try{
        if(y==0)
        throw 101;

        z= x/y;

    }

    catch(...){  // 
        cout << "ERROR" << endl;
    }


    cout << " BYE  " << endl;

    return 0;
}


// must watch all about catch and all about throw block,,,,,.....