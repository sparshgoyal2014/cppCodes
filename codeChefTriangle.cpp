#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    int case = 0;
    
    while(t--){
        case++;
        
        int L, k;
        cin>>L>>k;
        
        cout << "Case " <<case << " : " << (L-k+1)*(L-k+2)/2 << endl;
    }
	// your code goes here
	return 0;
}
