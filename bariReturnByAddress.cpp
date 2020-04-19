 #include<iostream>
using namespace std;

int* fun(int size)
{
    int *p = new int[size];   // it is allocated only in HEAP memry because we can not return address of local variable because once the function ends the allocated x will be deallocated 
    for(int i=0;i<size;i++)
    {
        p[i]= i+1;
    }
    return p;
}

int main()
{
    int *ptr = fun(5);
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;

}

