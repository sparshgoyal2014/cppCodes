#include<iostream>
using namespace std;

// void displayArray(int arr[]){
//     for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
//         cout << arr[i] ;
//     }
// }

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    // displayArray(arr);
    cout<< sizeof(arr) << endl;  // here arr is used only in context of simple array and not as a pointere (as in cout<< arr << endl;)

    cout << sizeof(&arr) << endl;   // that's why we are using & operator in front of arr otherwise arr will be give us an addresss 
    // also watch all abt strings/chars / charArray/ char poionter discussions

    return 0;
}

//must watch...https://stackoverflow.com/questions/33523585/how-do-sizeofarr-sizeofarr0-work
// must watch..bari's video on array passed as parameter in data structures and algorithms course