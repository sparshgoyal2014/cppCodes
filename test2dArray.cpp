#include<iostream>
using namespace std;

void display(int **arr){
    cout << arr[0][0] << arr[1][1];
}

int main(){
    int arr[2][2] = {2};
    // int **ptr = &arr[0][0];
    cout << "is it address... ->" << endl;
    cout << arr << endl;
    cout << &arr[0][0] << endl;
    cout << arr[0] << endl;


    cout << **arr << endl;

    // display((int**)(arr));  // run time error/
    // display(&arr[0][0]);
    // display(arr)

    cout << *arr + 1 << "    " << &arr[1][0] << endl;
    cout << &arr[0][1] << endl;
    return 0;
}