#include<iostream>
#include<string.h>
//#include<cstring>
//#include<string>

using namespace std;

int main(){
    char ch[] = "hello";   //{'h','e','l','l','o','\0'}
    cout << ch << endl;

    cout << ch+2 << endl;  // just (ch+2) ..... to get addresss we have to do :- &(ch+2);s
    cout << strlen(ch) << endl;  // 5 bcoz it only includes these letters in calculating the size of the string // becuse we 
    // include cstring or string.h(not string) libray   // these are c-Style Strings
    cout << sizeof(ch) << endl;  // 6 bcoz it also include last null character i.e.'\0'  // general can be usedat many places

    cout << ch[2] << endl;  // *(ch+2)
    cout  << *ch << endl;  // h
    cout << &ch << endl;

    //ch = 'w';

    
    int arr[5] = {1,2,3,4,5};  // declaratio and initialization should only be in 1 line....
    //arr[5] = {6,7,8,9,4};

    ch[0] = 'w';
    ch[2] = 't';


    cout << ch << endl;

        *ch = 'p';
        cout << ch << endl;

    const char* name = "myName";  // pointer to a constant character array

    cout << name << endl;


    char name2[5] = {'h' , 'a' , 'g' , 'r'  };
    cout << name2 << endl;

    

   // name[0] = {'a'};

    /*char c[5] = {"hell"};
    cout << c << " " << &c << endl;*/

    

   /* char *c = "hello";
    cout << c << endl;
    cout << strlen(c) << endl;

    string str = "hello";
    cout << strlen(str) << endl;*/

    return 0;

}


// must watch.. https://stackoverflow.com/questions/9257665/difference-between-string-and-string-h
