#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sumX =0;
    int sumY = 0;
    int sumZ = 0;

    int x[n];
    int y[n];
    int z[n];
    for(int i=0; i<n; i++){
        cin>>x[i] >> y[i] >> z[i];
    }

    for(int i=0; i<n; i++){
        sumX = sumX + x[i];
        sumY = sumY + y[i];
        sumZ = sumZ + z[i];
    }

    if(sumX == 0 && sumY==0 && sumZ == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}