#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isPossibleToMakeStone(string str, int size){
    unordered_map<char, int> map;

//    cout << str.size() << endl;

    for(int i=0; i<str.length(); i++){
//        cout << "*";
        map[str[i]]++;
    }

    int difference = abs(map['A'] - map['B']);

//    cout << map['A'] << "     " << map['B'] << endl;

    if(difference == 1){
        return true;
    }else{
        return false;
    }
}


int main() {

    int t;
    cin >> t;

    int caseNo = 1;

    while(t--){
        int N;
        cin >> N;


        string str;

        cin >> str;





//        cout << str.length() << endl;

       char result;

//       cout << str.size() << endl;


       if(isPossibleToMakeStone(str, N)){
           result = 'Y';
       }else{
           result = 'N';
       }

        cout << "Case #" << caseNo << ": " << result << endl;
        caseNo++;
    }


    return 0;
}
