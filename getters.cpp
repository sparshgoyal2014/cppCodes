#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    void personName();

    string showName();

    void setName(string);
};

/*void Person :: personName()
{
    name = "spartsh goyal";

}

string Person :: showName()
{
    return "my Name is ....." + name ;

}

int main()
{
    Person person;

    person.personName();

    cout<< person.showName() << endl;



    return 0;

}   */

void Person ::setName(string name) {this->name = name;} //we can't do this bcoz its scope is only inside not outside this function
// even if the variable name is same..........int this case var name is name itself as that of private name......
// but scope of this variable name is only inside this function......

string Person:: showName()
{
    return "My name is ......" + name;
}

int main()
{
    Person person;
    person.setName("spartsh goyal");
    cout << person.showName() << endl;

    return 0;
}
