#include<iostream>
// #include<array>


using namespace std;

class Array{
    public:
    int size;
    int *A;
    int length;
};

class Array2{
    public:
    int A[20];
    int length;
    int size;
};

void display(Array arr){
    cout << "elements are: " << endl;
    for(int i=0;i<arr.size;i++){
        cout << arr.A[i] <<" ";
    }
}

int main(){
    Array arr;
    int n;
    cout << "enter size odf an array: " ;
    cin>>arr.size;

     arr.A = new int[arr.size];

     arr.length = 0;
     cout << "Enter no. of numbers:" ;
     cin>>n;

     cout << "enter all elements: ";
    for(int i=0;i<n;i++){
        cin>>arr.A[i];
    }

    arr.length = n;

    display(arr);

    Array2 arr2 = {{1,2,3,4,5},5,20};


    return 0;
}