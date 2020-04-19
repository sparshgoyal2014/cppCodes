#include<iostream>
using namespace std;


int main()
{
    int n;

    cout << "enter the case : " << endl;
    cin>>n;
    
        for(int i=0;i < 4;i++)
        {
            if(n==i)
            {
            cout << i << endl;
            break;
            }
        }
        cout << "A\'" << endl;

    return 0;
}