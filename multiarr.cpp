#include<iostream>
using namespace std;

int main()
{
	int r,c;
	cout<<"enter how many rows you want to enter in  a 2d array"<<endl;
	cin>>r;
	cout<<"enter how many columns you want to  enter in 2d array"<<endl;
	cin>>c;
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
	}
	return 0;
}