#include<iostream> 

using namespace std;

int main(){


    char name[];
    cout <<" USER PLEASE INPUT NAME :" <<endl;

    cin >> name;

    cout<< "size of char array is : " << endl;

   // cout << sizeof(name)/sizeof(char) << endl;

    return 0;

}

//    --------------------------CHAR ARRAY---------------
/*{
    char text[];
    cout<< "USER PLEASE INPUT SOME TEXT....::"<< endl;

    cin>> text;

    cout<< "you entered :" << text <<  endl;


}
*/
//    ----------------------------------REVERSING ARRAYS---------------------
/*{
    int arr[4] = {1, 2, 3, 4};
    cout << "reversed array is :" << endl;

    for (int i = 0; i < 4; i++)
    {
        arr[i]=arr[3-i];

    }

    for(int i=0;i<4;i++)
    {
        cout<< " " <<arr[i];
    }

    return 0;

}
*/

//      -------------------  EQUALITY OF TWO ARRAY------------------------

/*
{
    int arr[4] = {1, 2, 3, 4};
    int arr2[4];
//    *arr2=*arr;
  for(int i=0; i<4 ;i++)
  {
      arr2[i]=arr[i];
  }
    cout<<arr2[1] <<endl;
    cout<< arr2[0]<<endl;

    return 0;


}
*/



// ------------checking equality of two arrays-------------------------

/*{
    int arr[4] = {1, 2, 3, 4};
    int arr2[4];
//    *arr2=*arr;
  for(int i=0; i<4 ;i++)
  {
      arr2[i]=arr[i];
  }


for(int i=0;i<4;i++)
{

    if(arr2[i]==arr[i])
    {
        if(i==3)
        {
            cout<< true <<endl;
        }
        continue;
    }
    else{
        cout<< false << endl;
    }


}

return 0;
}
*/


  