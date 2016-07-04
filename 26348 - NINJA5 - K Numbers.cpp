#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	int n, k;
	while(t--){
		cin>>n;
		cin>>k;
		int X[k], myArray[n+1];
		//if an index in myArray is 1, it means the number is available to be kept as the output
		int i, j = 0;
		int oddSum = 0;
		int evenSum = 0;
		for(i = 1; i <= n; i++){
			myArray[i] = 1;
		}
		for(i = 0; i < k; i++){
			cin>>X[i];
			//removing the number from the output
			myArray[X[i]] = 0;
			//removing the number before it from the output
			if(X[i] != 1)
				myArray[X[i] - 1] = 0;
			//removing the number after it from the output
			if(X[i] != n)
				myArray[X[i] + 1] = 0;
			if(X[i] %2 == 0) evenSum++;
			else oddSum++;
		}
	
  		int count = 0;
		for(i = 1; i <= n; i++){
			//checking the remaining numbers 
			if(myArray[i] == 1){
				count++;
				if(myArray[i+1] == 1) i++;
			}
		}
		cout<<count+k<<"\n";
			
	}
	return 0;
}