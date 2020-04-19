#include<iostream>
using namespace std;



void test(int x, int y){
    cout << x << y << endl;
}

int sum(int x,int y,int z=0) // z parameter becomes optional......
// int sum(int a=0,int x,int y=1,int z=0   )   // error all the default args should be declared from the last
{
    cout << x << y << z << endl;
    return x+y+z;
}



int main()
{  
     int x = 10;
     cout << x << endl;



    int a=sum(1,2,3);
    int b=sum(1,2);
    cout << a << " " << b << endl;

    sum(1,2,3);
    sum(4,5);
    return 0;

}