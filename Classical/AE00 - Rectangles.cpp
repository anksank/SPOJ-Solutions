#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;
	cin>>number;
	int i = 1, j;
	if(number == 1) cout<<"1";
	else {
		int sum = 1;
		for(i = 2; i <= number; i++){
			for(j = 1; j <= sqrt(i); j++){
				if(i % j == 0) sum++;
			}
		}
		cout<<sum;
		
	}
	return 0;
}