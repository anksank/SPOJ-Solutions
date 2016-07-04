#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	int temp;
	int arr[] = {2, 3, 4, 5, 8, 9, 10};
	for(int i = 0; i < 7; i++){
		temp = num;
		while(temp > 0){
			temp = temp - arr[i];
		}
		if(temp == 0)
			cout<<"Number is divisible by "<<arr[i]<<"\n";
	}
	return 0;
}