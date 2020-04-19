#include <iostream>
using namespace std;
int main()
{
	int arr[]; //error will occur.......you must initialize an empty array when declared
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	for (int j = 0; j < 5; j++)
		cout << arr[j];
	return 0;
}