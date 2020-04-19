#include<iostream>

using namespace std;

int main()
{

    char character = 'a';

    char* pcharacter = &character;

    cout<< "value of character variable : " << character << endl;

    cout<< " address of variable character is : " << pcharacter << endl;


    return 0;
    
}
