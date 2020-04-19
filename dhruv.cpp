#include <iostream>
using namespace std;
int main()
{
	float n, x;
	cout << "enter how many numbers you want to enter :" << endl;
	cin >> n;
	cout << "enter the numbers :" << endl;
	cin >> x;
	int max = x;
	for (int i = 1; i < n; i++)
	{
		cin >> x;
		if (max < x)
		{
			max = x;
		}
	}
	cout << max;
	return 0;
}