#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream ofs("my.txt",ios::trunc);
       // by deault truncate the contents will be tken...i.e.  ios::trunc...

       ofs<<"john" << endl;
       ofs << 25 << endl;
       ofs << "ECE" << endl;

       ofs.close();

       return 0;



}