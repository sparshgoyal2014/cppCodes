#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testCases;
    cin>>testCases;

    while(testCases != 0){
        int childArr[3];
        for(int i = 0;i<3;i++){
            cin>>childArr[i];
        }

        int moneyArr[3];
        for(int i = 0;i<3;i++){
            cin>>moneyArr[i];
        }

        int flag = 1;

        // for(int i = 0;i<2;i++){
        //     if(childArr[i] > childArr[i+1] && moneyArr[i] > moneyArr[i+1]){
        //         continue;
        //     } else if(childArr[i] < childArr[i+1] && moneyArr[i] < moneyArr[i+1]){
        //         continue;
        //     } else if(childArr[i] == childArr[i+1] && moneyArr[i] == moneyArr[i+1]){
        //         continue;
        //     } else {
        //         flag = 0;
        //         break;
        //     }
        // }



        if(flag == 1){
            cout<<"FAIR"<<endl;
        } else {
            cout<<"NOT FAIR"<<endl;
        }

        testCases--;
    }

    return 0;
}