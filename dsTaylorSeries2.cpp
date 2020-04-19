#include<iostream>
using namespace std;

int e(int x, int n){
    int s = 1;
    for(;n>0;n--){
        s = 1 + (x/n*s);
    }

    return s;
}

int e2(int x, int n){
    static int result = 1;
    if(n==0){
        return result;
    }else{
        result = 1 + (x/n) * result;
        return e2(x, n-1); 
    }
}