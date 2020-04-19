#include<iostream>
#include<string.h>


using namespace std;

int main(){

    char *test = "asdf";
    char *test2 = "jklh";  // test2[] = {'j' 'k' 'l' 'h' '\0'}

   // *test2 = 'q';  // gives run time errror

   *test = 'e';
   cout << test << endl;

    cout << &test2 << endl;

    test2++;
    cout << &test2 << endl;

   // cout << &(test2 + 1 ) << endl;

    cout << test << "  " << test2 << endl;

    test2 = "werr";

    cout << &test2 << endl;
    cout << test2 << endl;
    /*
    char *ptr = "hello";  // char ptr[]
    char *ptr2;

    ptr2 = ptr;

    cout << ptr2 << endl;

    strcpy(ptr2 , ptr);

    cout << ptr2 << "     " << ptr << endl;*/
    return 0;

}

