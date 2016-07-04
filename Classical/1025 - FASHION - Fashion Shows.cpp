#include <iostream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i;
		int men[n], women[n];
		for(i = 0; i < n; i++){
			cin>>men[i];
		}
		for(i = 0; i < n; i++){
			cin>>women[i];
		}
  		vector<int> menVector (men, men + n);
  		vector<int> womenVector (women, women + n);  
		sort (menVector.begin(), menVector.end()); 
		sort (womenVector.begin(), womenVector.end());
		int sum = 0;
		for(i = 0; i < n; i++){
			sum += (menVector[i]*womenVector[i]);
		}
		cout<<sum<<"\n";
	}
	return 0;
}