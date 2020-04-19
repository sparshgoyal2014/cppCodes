#include<iostream>
using namespace std;

int main(){
    // ***** part 1****************************
    
    
    // int arr[5];
    // arr[0] = 5;   // others will be garbage
    // for(int i=0; i<5; i++){
    //     cout << arr[i] << endl;
    // }
    
    
    // ****************************************//


    // ***** part 2****************************

    // char arr[5];
    // arr[0] = 'a';
    // for(int i=0; i<5; i++){
    //     cout << arr[i] << endl;
    // }

    // ***** **********************************

    // ***** part 3****************************

    // char arr[] = {'a'};  // must be terminated with the null character
    // char arr2[5] = {'a'}; // not necessary to be terminated with the NULL charcter explicitly it implicitly provides 0 to all the remaining positions that is the askii value of NULL chatracter
    // cout << arr << endl;

    // ****************************************

    // ***** part 4(INPUT)****************************
    // int arr[5];
    // cout << "please input:" << endl;

    // for(int i=0; i<5; i++){
    //     cin >> arr[i];
    // }

    // cout << endl;

    // for(int i=0; i<5; i++){
    //     cout << arr[i] << endl;
    // }

    // ***************************************


    // char arr[5];
    // cin>> arr[0];

    // for(int i=0; i<5; i++){
    //     cout << arr[i] << endl;
    // }

    char c;
    cout << "please input:" <<endl;
    cin >>c;
    cout << c << endl;

    cout << *(&c + 1) << endl;
    

    

    return 0;
}
