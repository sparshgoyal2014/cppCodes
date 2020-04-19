#include<iostream>

#include<sstream>

using namespace std;

int main()
{

    string name = "spartsh goyal...";

    int age = 18;

    stringstream ss;
    ss << "name is : " << name << "age is : " << age ;

    cout<< ss.str() << endl;

    return 0;

}