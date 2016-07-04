#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
 	
 	char previousChar = 'X';
 	char eachChar[] = {'A', 'B', 'C', 'D'};
 	char myTwoChars[2];
 	int j,k;
 	char colorString[2];
 	for (int i = 0; i < 2*n; i+=2){
 		cin>>colorString[0];
 		cin>>colorString[1]; 
 		k = 0;
 		for(j = 0; j < 4; j++){
 			if ((colorString[0] != eachChar[j]) && (colorString[1] != eachChar[j])){
 				myTwoChars[k++] = eachChar[j];
 			}
 		}
 		if(previousChar == myTwoChars[0]){
 			cout<<myTwoChars[1]<<myTwoChars[0];
 			previousChar = myTwoChars[0];
 		}
 		else {
 			cout<<myTwoChars[0]<<myTwoChars[1];
 			previousChar = myTwoChars[1];
 		}
 	}
	return 0;
}