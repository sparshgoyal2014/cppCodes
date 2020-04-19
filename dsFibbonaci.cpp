#include<iostream>
using namespace std;

int fib(int n){

    int t0 = 0, t1 = 1, s, i;
    if(n<=1){
        return n;
    }

    for(i=2; i<=n; i++){
        s = t0+t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int rFib(int n){
    if(n<=1){
        return n;
    }else{
        return rFib(n-2)+rFib(n-1);
    }
}

int F[10];

int mFib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }else{
        if(F[n-2]==-1){
            F[n-2] = mFib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = mFib(n-1);
        }

        return F[n-2]+F[n-1];
    }
}

int main(){

    for(int i=0;i<10;i++){
        F[i] = -1;
    }
    
    cout << fib(6) << endl;
    cout << rFib(6) << endl;
    cout << mFib(6) << endl; 
    return 0;
}