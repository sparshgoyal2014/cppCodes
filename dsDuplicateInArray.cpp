#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Duplicate(int arr[], int n){
    int lastDuplicate ;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1] && arr[i] != lastDuplicate){
            cout << arr[i] << endl;
            lastDuplicate = arr[i];

        }
    }
}

void countDuplicates(int arr[], int n){
    
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            int j=i+1;
            while(arr[j] == arr[i])j++;

            cout << arr[i] << " is appearing " << j << " times " << endl;
            i = j-1;  
        }

    }
}  // time complexity is: O(n)

void duplicateUsingHash(int arr[], int n, int H[]){
    for(int i=0;i<n;i++){
        H[arr[i]]++;
    }
    for(int i=0;i<= *max_element(arr, arr+n);i++){
        cout << "number " << i << " is appearing " << H[i] << " times " << endl;
    }
}

int main(){
    int arr[10] = {3,6,8,8,10,12,15,15,15,20};
    Duplicate(arr, 5);

    return 0;

}