#include<iostream>

using namespace std;

int main()
{


    char text[] = {'h','e','l','l','o'};

    cout << "value of char[] is : " << text << endl;


    cout << "=================================================================" << endl;


    char text2[] = "hello2"; //  it will automatically add hell2 in the array of character ........

    /*string b; // WRONG STEP

    char text3[] = b; // WRONG STEP */

    char text3[];


    cout << "User please input text you want to print  : " << endl;

    cin >> text3;


    cout << "text you entered :" << text3 << endl;

    return 0;

}