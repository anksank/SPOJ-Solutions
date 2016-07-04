#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	int i;
	string number;
	int oddSum, evenSum;
	int remainder11;
	while(t--){
		oddSum = 0;
		evenSum = 0;
		i = 0;
		cin>>number;
		while(i < number.length()){
	
			if((i%2) != 0) evenSum += (number.at(i)-48);
			else oddSum += (number.at(i)-48);
			i++;
		}
		if(number.length() % 2 != 0)
			remainder11 = (oddSum-evenSum)%11;
		else remainder11 = (evenSum-oddSum)%11;
		if(remainder11 < 0) remainder11 = remainder11 + 11;
		remainder11 = (remainder11*8)%11;
		if(remainder11 == 0) cout<<remainder11<<"\n";
		else cout<<(11-remainder11)<<"\n";
	}
	return 0;
}