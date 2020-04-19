#include<iostream>

using namespace std;

int main()
{
    int x,y,z;

    cout << "enter valu of x :" << endl;
    cin >> x;

    cout << "enter value of y : " << endl;
    cin >> y;

    cout << "enter value of z : " << endl;
    cin>> z;

    for(int i=0;i<5;i++)
    {
        if(x==2)
        {
            if(y==3)
            {

                if(z==2)
                {
                    continue;
                }
                cout << i << endl;
            }
        }
    }

    return 0;

}