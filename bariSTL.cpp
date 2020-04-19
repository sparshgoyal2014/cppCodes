#include<vector>
#include<iostream>
#include<list>

using namespace std;


int main(){
    vector<int> v ={1,5,6,2,3};
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    vector<int>::iterator itr;
    cout << "using iterator.." << endl;
    for(itr = v.begin();itr!= v.end();itr++){
        cout << ++*itr << endl; // using this iterator we can modify this value....like reference or pointer...

    };

    cout << "using forEach Loop" << endl;


    for(int x:v){
        cout <<  x << endl;
    }

     list<int> v2 ={1,5,6,2,3};
    v2.push_back(20);
    v2.push_back(30);
   // v2.pop_back();

    list<int>::iterator itr2;
    cout << "using iterator.." << endl;
    for(itr2 = v2.begin();itr2!= v2.end();itr2++){
        cout << ++*itr2 << endl; // using this iterator we can modify this value....like reference or pointer...

    };

    cout << "using forEach Loop" << endl;


    for(int x:v2){
        cout <<  x << endl;
    }

    



    return 0;
}