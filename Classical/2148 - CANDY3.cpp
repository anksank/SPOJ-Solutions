#include <iostream>
using namespace std;

int main() {
	long long int t; 
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int sum = 0, number;
		for(int i = 0; i < n; i++){
			cin>>number;
			sum = sum + number;
			sum = sum % n;
		}
		if(sum == 0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}