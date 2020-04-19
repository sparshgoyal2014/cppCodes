#include<iostream>
using namespace std;


int main(){
    const int x = 20;
   // ++x;   not possible ...gives compilation error....

   int y = 5;
   const int *ptr  = &y;

   ++ptr;

}
// must watch  bari's videos.....//sec. 19 constant...