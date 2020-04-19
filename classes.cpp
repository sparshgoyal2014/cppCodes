#include<iostream>
using namespace std;



class callbyName
{
    public:

    void helloJim()
    {
        cout<< "Hello JIM ....!!!!!" << endl;

    }


    void helloBob()
    {
        cout<< "Hello BOB ......!!!!" << endl;

    }

    callbyName();
};


callbyName::callbyName()
{
    cout<< "Hi There this is CONSTRUCTOR....!!!!" << endl;
}



int main()
{
    callbyName jim ,bob;
    jim.helloJim();
    bob.helloBob();



    return 0;

}