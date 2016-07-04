#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n != -1){
		int candies[n], total = 0;
		for(int i = 0; i < n; i++){
			cin>>candies[i];
			total += candies[i];
		}
		int changes = 0;
		if(total % n == 0){
			int eachPacketCount = total/n;
			for(int i = 0; i < n; i++){
				int x = eachPacketCount - candies[i];
				if(x < 0) x = -1*x;
				changes += x;
			}
			cout<<changes/2<<"\n";
		}
		else cout<<-1<<"\n";
		cin>>n;
	}
	return 0;
}