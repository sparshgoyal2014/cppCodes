#include <iostream>
using namespace std;
int main()
{
	int arr[50] = {1, 2, 3, 4, 5};
	cout << arr << endl;
	arr[50] = static_cast<char>(arr[50]);  // static casting
	cout << arr << endl;
	return 0;
}