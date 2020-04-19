#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int T;
    int noOfWorkers;
    cin>>T;

    int i=0;
    while(i<T){
        cin>>noOfWorkers;
        int salaryEach[noOfWorkers];
        
        for(int i=0;i<noOfWorkers;i++){
            cin>>salaryEach[i];
        }
        
        while(1){
            int sum = 0;
            int *itr;
            itr = max_element(salaryEach, salaryEach+noOfWorkers);
            
            for(int i=0;i,noOfWorkers;i++){
                salaryEach[noOfWorkers]++;
            }
            *itr = *itr-1;
            int check;
            for(int i=0;i<noOfWorkers;i++){
                
                if(salaryEach[0]==salaryEach[i])
                check = 1;
                else{
                    check = 0;
                }
            }
            
            if(check == 1){
                cout << sum;
                break;
            }
            sum++;
        }
        
        i++;
        
        
    }
	// your code goes here
	return 0;
}
