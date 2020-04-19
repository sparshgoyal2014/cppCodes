#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c=0;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            while(true)
            {
            if(j-k-c>0)
            {
                if(arr[j-k-c]<arr[j])
                {
                sum+=abs(k-c); 
                break;
                }
            }
            else if(arr[j+k+c]<arr[j]&&(j+k+c)<=n)
            {
                sum+=abs(k+c);
                break;
            }
                c++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}