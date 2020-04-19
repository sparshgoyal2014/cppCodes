#include<iostream>
using namespace std;



int main()
/* {
    string texts[] = {"one" , "two" , "three" };

    string* ptexts = &texts[0];

    for(int i=0;i<3;i++)
    {

        cout << "values of texts are : " << texts[i] << endl;

    }

    cout<< "value of first element of the array through the pointer is : " << *ptexts << endl;

    return 0;


    
 
} */


{
   int nos[] = {1,2,3};

   // int* pNos = nos 
 cout << nos << endl; // this will give us Address.....since pointer variables also store addresses so array variable also act as 
                      // pointers variables.....
    
    cout << *nos << endl;
    // cout << *nos[1] << endl;   ------->    it will give errror......?????

 return 0;

}
