#include<iostream>
using namespace std;

void perm(char arr[], int k){
    static int A[10] = {0};
    static char res[10];

    int i;

    if(arr[k] == '\0'){
        res[k] = '\0';
        cout << res << endl;
    }

    for(i = 0; arr[i] != '\0'; i++){
        if(A[i] == 0){
            res[k] = arr[i];
            A[i] = 1;
            perm(arr, k+1);
            A[i] = 0;
        }
    }
}

void perm2(char arr[], int l, int h){

    if(l == h){
        cout << cout << arr << endl;
    }else{
            for(int i=l; i<=h; i++){
            swap(arr[l], arr[i]);
            perm2(arr, l+1, h);
            swap(arr[l], arr[i]);
        }
    }
    

}

int main(){
    char arr[] = "III";
    perm(arr, 0);

    return 0;

}