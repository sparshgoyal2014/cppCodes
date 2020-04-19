#include<iostream>
using namespace std;

void displayArr(int n){
    int arr[n];

    for(int i=0;i<n;i++){
        arr[i] = i+1;
        cout << arr[i] << " " ;
    }

}

int main(){

    int n;
    displayArr(10);
    cout << "size: " ;
    cin >> n;
    
    int array[n];

    for(int i=0;i<n;i++){
        array[i] = 1;
        cout << array[i] << " " ;
    }
    
    // must watch referencees
    //https://stackoverflow.com/questions/737240/array-size-at-run-time-without-dynamic-allocation-is-allowed
    //https://stackoverflow.com/questions/1887097/why-arent-variable-length-arrays-part-of-the-c-standard

    // other references
    //https://www.geeksforgeeks.org/arrays-in-c-cpp/
    http://www.cplusplus.com/reference/array/array/
    https://www.programiz.com/cpp-programming/arrays
    return 0;
}