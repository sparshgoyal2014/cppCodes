#include<iostream>

using namespace std;

int main()
{
    int* iPtr;
    int x = 5;

    iPtr = &x;

    cout << "value of x is : " << x << endl;

    cout << "address of variable x is : " << iPtr << endl;

    iPtr-- ;

    cout << iPtr << endl;

     iPtr++ ;
 
     cout << iPtr << endl;

     return 0;    
}