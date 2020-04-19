#include<iostream>
using namespace std;

void checkPairSum(int arr[], int n, int k){
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j] == k){
                cout << arr[i] << "+" << arr[j]  << "=" << k << endl; 
            }
        }
    }
}

void usingHash(int arr[], int n, int H[], int k){
    for(int i=0;i<n;i++){
        if(H[k-arr[i] != 0]){
            cout << arr[i] << "+" << k-arr[i] << "=" << k << endl;
        }
        H[arr[i]]++;
    }
}

void PairInSorted(int arr[], int n, int k){
    int i=0;
    int j = n-1;

    while(i<j){
        if(arr[i]+arr[j]== k){
            cout << arr[i] << "+" << arr[j]  << "=" << k << endl;
            i++;
            j--;
        }else if(arr[i] + arr[j] < k){
            i++;
        }else{
            j--;
        }
    }
} // time complexity: O(n)

void MaxMin(int arr[], int n){
    int min = arr[0];
    int max = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }else if(arr[i]>max){
            max = arr[i];
        }
    }
} //time complexity: O(n)

int main(){
    int arr[10] = {6,3,8,10,16,7,5,2,9,14};
    int H[16] = {0};

    return 0;
}