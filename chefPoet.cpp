#include <iostream>
using namespace std;

int main() {
    int pagesForPoetry, pagesLeft, ruppessLeft, shopkeeperNotebooks;
    int testCases;
    cin>> testCases;
    
    
    int i=0;
    while(i<testCases){
        
        int price,pagesInNotebook;
        
        cin>>pagesForPoetry>>pagesLeft>>ruppessLeft>>shopkeeperNotebooks;
        int pagesEach[shopkeeperNotebooks];
        int priceEach[shopkeeperNotebooks];
        for(int i=0;i<shopkeeperNotebooks;i++){
            cin>>pagesInNotebook>>price;
            pagesEach[i] = pagesInNotebook;
            priceEach[i] = price;
        }
        
        for(int i=0;i<shopkeeperNotebooks;i++){
            if(((pagesEach[i] + pagesLeft) >= pagesForPoetry) && (ruppessLeft<= priceEach[i])){
                cout << "LuckyChef";
                break;
            }else{
                cout << "UnluckyChef";
                break;
            }
        }
        cout << endl;
        i++;
    }
	// your code goes here
	return 0;
}
