#include <iostream>
#include <map>
using namespace std;
//int lookup[100000001];
map<long long int, long long int> lookup;     

long long int calculateCoins(long int n){
	
	if (lookup[n] == 0){
      	if (n < 12)
         	lookup[n] = n;
      	else 
      		lookup[n] = calculateCoins(n/2) + calculateCoins(n/3) + calculateCoins(n/4);
   	return lookup[n];
}
int main() {
	long long int n;
	while(cin>>n){
		long long int solution = calculateCoins(n);
		cout<<solution<<"\n";
	}
	return 0;
}