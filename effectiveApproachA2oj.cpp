#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    int m;
    cin>>m;
    int qrr[m];

    for(int i=0; i<m; i++){
        cin >> qrr[i];
    }


    int sumV = 0;
    int sumP = 0;


    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sumV++;
            if(qrr[i] == arr[j]){
                break;
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j =n-1; j>=0; j--){
            sumP++;
            if(qrr[i] == arr[j]){
                break;
            }
        }
    }

    cout << sumV << " " << sumP;

    return 0;
    
}