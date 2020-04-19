#include<iostream>
using namespace std;


int main()
{
   // int arr[3] = {0,1,2,3,4};

   int arr[3] ; 

   for(int i=0;i<10;i++)
   {
       arr[i]=i;
       cout << arr[i] << " " ;
   }

   cout << endl;
    cout << arr[4] << endl;

    return 0;

}