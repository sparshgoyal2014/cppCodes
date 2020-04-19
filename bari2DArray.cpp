#include<iostream>
using namespace std;

int main()
{
    int arrA[2][3] = {{1,2,3},{4,5,6}};

    int arrB[2][3] = {1,2,3,4,5,6};     // can also be initialized like this

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << arrB[i][j] << "     " ;
        }
        cout << endl;
    }


    return 0;
}