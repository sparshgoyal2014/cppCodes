#include <iostream>
using namespace std;
int main()
{
	int i, n, z, x = 0;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		x = x + arr[i];
	}
	cout << x;
	return 0;
}