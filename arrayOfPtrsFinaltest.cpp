#include<iostream>
using namespace std;

int main(){
   /* int (*ptr)[5];
    arr[5] = {1,2,3,4,5};
    ptr = &arr;
    */

   //simple (array-pointer) relationship
   int *ptr1 ;
   int arr[5] = {1,2,3,4,5};
    ptr1 = arr;
    cout << arr << " " << ptr1 << endl; // address....
    cout << *arr << " " << *ptr1 << endl; // derefrencing to the name vsariable ,......
   // cout << *arr[0] << endl;
    //i.e it displays cout << arr1[0];as it stores address of 1st element so it will derefrence only the first element
    cout << arr[2]  << " " << ptr1[2] << endl;//same as.....*(aar+2) and  *(ptr1+2)  so as *(arr+2) can be printed as arr[2]
    // so *(ptr1+2) can also be printed as ptr1[2]
    cout << *(arr+2) << ' '<< " " << *(ptr1 + 2) << endl;

    // array of pointers......
    int *ptr2[5];//variable name ----> ptr2    
    // data type ----> int *
    //variable name is of arra 
    // or array of 5 ptr2 of data type *int (pointer to an int)
    int arr2[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        ptr2[i] = &arr2[i];
        cout << ptr2[i] << endl; // address as ptr2[i] is a variable it is not like that ptr1[2] (it is *(ptr1+2))
        // but it is (ptr2[i] is only variable.....)
    
        cout << *ptr2[i] << endl; // derefrencing of a variable ptr2[i] pointing to which data......
        cout << (ptr2[i])[2] << endl; // its meaning is ....... *(ptr2[i] + 2)......
    }
    cout << ptr2[2] << endl;

    // pointer to an  array.......
    int (*ptr3)[5];
    int arr3[5] = {1,2,3,4,5};
    ptr3 = &arr3;
    cout << arr3 << " " << ptr3 << endl;
    cout << *ptr3 << endl; /////////////******* must watch geeks for geeks pointer to an array.....************/////////////
    cout << *(*ptr3) << endl;// dereferencing of *ptr3......*ptr3 is the address of base address of arr3
    cout << ptr3[2] << ' '  << endl; // addrerss......as 
    cout << *ptr3[2] << endl; // garbage value.....
    cout << (*ptr3)[2] << endl;// it prints arr3[2]// its meaning is ..... *((*ptr3) + 2)
    cout << "=====================================" << endl;
    cout << *ptr3[2] << endl;

    // random test b/w *ptr and ptr.....
    cout << ptr3 + 2 << "    " << (*ptr3) + 2 << endl;



    return 0;
}

// ******** must read it! amazing
// ******Ultimate link Below******
// https://stackoverflow.com/questions/12674094/array-to-pointer-decay-and-passing-multidimensional-arrays-to-functions