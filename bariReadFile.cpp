#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string name;
    int roll_no;
    string branch;


    ifstream infile;
    infile.open("my.txt"); // ios::in
                           // ios::out


    //if(!infile)

    if(!infile.is_open()){
        cout << "file cannot be opened" << endl;

    }

    else 
    cout << "file is Opened" << endl;

    infile>>name>>roll_no>>branch;
    infile.close();


    cout << "Name :" << name << endl;
    cout << "Roll no. :" << roll_no << endl;
    cout << "Branch :" << branch << endl;

    return 0;



}