#include<iostream>
using namespace std;

class integer 
{
	private:
int x=1,y=2;
public :
int z=5;

};
int main()
{
	integer o1;
	//cout<<z;is wrong as to call data members of a class you should only have to callit by the help of objects not directly

	cout<<o1.z<<endl;
	
	return 0;
}