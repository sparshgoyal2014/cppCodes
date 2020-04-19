#include<iostream>
using namespace std;
int main()
{
	int  j,max,min,z=0,n=0,x;
int k=0,i;	
	cout<<"USER PLEASE ENTER THE NUMBER"<<endl;
	
	for(i=0;n>=0;i++)
	{
		cin>>n;
		int  arr[i]={n};
		k=k+1;
	}
	
	int arr[k-1];
	for(i=0;i<=(k-2);i++)
		x=arr[i];
	z=z+x;
	
	cout<<"the average of the numbers is :- "<<int (z/(k-1));
	
	/*max=0;
	min=arr[0];
	for(i=0;i<=(k-2);i++)
	{
		if(max<arr[i])
			max=arr[i];
		
		if(min>arr[i])
			min=arr[i];
	}
	
	for(i=0;i<=(k-2);i++)
	 {	
		for(j=0;j<=(k-2);j++)
		{
			if(arr[i]<arr[j])
			arr[i]=arr[j];
		}
		
	}
	cout<<"the largest number is:- "<<max<<endl;
	cout<<"the smallest number is :- "<<min<<endl;
	cout<<"ascending order:- ";
	for(i=0;i<=(k-2);i++)
		cout<<arr[i];*/
	
	return 0;
}
		
	
	

		
	
		
	
	
	
	
