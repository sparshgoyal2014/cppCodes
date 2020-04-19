#include<iostream>
using namespace std;

void changeSomething(double &x)
{
x = 123.4;
}


int main()
{
    /*int value1 = 8;
    int value2 = value1;
    value2 = 10;

    cout << "value1  : " << value1 << endl;

    cout << "value2 : " << value2 << endl;
    */

   int value1 = 8 ;
   int & value2 = value1;
   value2 = 10;
     cout << "value1  : " << value1 << endl;

    cout << "value2 : " << value2 << endl;

    double value;
    value = 4.321;
   changeSomething(value);    //goes to the reference of the "value"  and change the value in its address stored in it ........

   cout << value ;

   return 0;

}