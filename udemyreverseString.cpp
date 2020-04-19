#include<iostream>
using namespace std;

int main()
{
    char name[] = "IIT-PEC";

    cout<< name << endl;
    int size = sizeof(name)-1;
    char* StartC = name;
    char* EndC=name + size-1;

    for( ;StartC<EndC;StartC++,EndC-- )
    {
    char save = *StartC;
    *StartC = *EndC;

    *EndC = save;
    }

   /* while(StartC<EndC)
    {
        char save = *StartC;
    *StartC = *EndC;

    *EndC = save;
    StartC++;
    EndC--;
    }
    */

    cout << name << endl;

    return 0;




}