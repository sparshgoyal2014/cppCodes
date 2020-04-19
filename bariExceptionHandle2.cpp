#include<iostream>
using namespace std;

int devision(int a,int b){
    if(b==0)
    throw int(101);
    return a/b;  
}

int main(){
    int x = 10;
    int y= 0;
    int z;

    try{
        z=devision(x,y);
        cout << z << endl;
    }

    catch(int e){
        cout << " division by zero" << "error code " << e  << endl;

    }
    cout << "bye" << endl;

    return 0;

}