#include<iostream>
using namespace std;

int main(){
    int x = 21;
    string name = "spartsh";
    string name2 = "goyal";
    char name3[] = "sparhifksisd";
    int num = 2;
    char array[] = "its";
    char array2[]  = "gFamily";

    cout << name + "name2"<< endl; // concatenates successfully
    cout << "ffsoiojoif" + 2 << endl; // "ffsoiojoif" acts lie a const array not string.... and rest of the information watch instagram.. i think i caotured a screenshot
    // of that post..;
    cout << name + name2 << endl;
    //cout << name + 2 << endl;   // error as it is not c-Style Strings
    cout << name3+2 << endl;
    cout << name3 + num << endl;


   // cout << name + 2 << endl;   // #error
   // cout << "fsijj" + "sfhs" << endl; // #error
    return 0;
}