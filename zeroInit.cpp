#include<iostream>
using namespace std;

double dArr2[3];

int main(){
    string str = "";   // empty string
    string str2 = " ";  // not empty String

    // string str3 = 0;   // run time error
    // cout << str3 << endl;  

    double dArr[3];
    cout << dArr[0] << "  " << dArr[1] << "   " << dArr[2] << endl;

    for(int i=0;i<3;i++){
        cout << dArr2[i] << endl;
    }

    return 0;
}