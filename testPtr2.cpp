#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main () {
 int *names[MAX] = { 1, 2, 3, 4 };

   for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << (names + i) << endl;
   }
   
   return 0;
}