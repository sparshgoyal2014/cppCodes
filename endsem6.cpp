#include<iostream>
using namespace std;

class integer
{
private : 
   int x; 	
   public :
   void setdata(int a)
   {
	   x=a;
   }
   void showdata()
   {
cout<<x;
   }
integer operator ++()
{
integer i;
i.x=++x;
return(i);
}

};

int main()
{
integer o1,o2;
o1.setdata(3);
o2=++o1;

o1.showdata();
o2.showdata();

return 0;
}


	