#include<iostream>
using namespace std;

void Duplicate(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int count = 1;
        if(arr[i] != -1){

            for(int j = i+1;j<n;j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
            }

            if(count > 1){
                cout << " element " << arr[i] << "is repeated " << count << "times " << endl; 
            }
        }
    }
    
}

void usingHash(int arr[], int n, int H[]){
    
}

int main(){
    int arr[10] = {8,3,6,4,6,5,6,8,2,7};
}