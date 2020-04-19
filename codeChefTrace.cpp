#include <iostream>
using namespace std;

int trace(int *arr, int n){
	int sum = 0;
	for(int i = 0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j)
			sum = sum + *(arr + i + j);

			else{
				continue;
			}
		}
		
	}

	return sum;
}

int main() {
	// int t;
	// cin>>t;
	// while(t--){
	//     int n;
	//     cin>>n;
	    
	//     int arr[n][n];
	    
	//     // input elements into the main array
	//     for(int i=0; i<n; i++){
	//         for(int j=0; j<n; j++{
	//             cin>>arr[i][j];
	//         }
	//     }
	    
	//     int max = 0;
	    
	    
	// }

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // cout << trace(*arr);
	cout << trace((int*)arr, 3);
	return 0;
}
