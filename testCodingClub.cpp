#include<iostream>
using namespace std;

int main(){
    int arr[10] = {3,0,8,1,12,8,9,2,10,10};

    int x,y,z;

    x = ++arr[2];
    y = arr[2]++;
    z = arr[x++];

    cout << x << " " << y << " " << z << endl;
    return 0;
}