#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
		string myString; 
		char allValues[3][10];
		int i = 0;
		int j = 0;
		int k = 0;
		cin>>myString;
		while(i < myString.length()){
			
			if(myString.at(i) != 'e'){
				allValues[k][j++] = myString.at(i);
				//cout<<"hh";
			}
			else {
				
				allValues[k][j] = '\0';
				j = 0; 
				k++;
			}
			i++;
			//cin>>myString[i++];
		}
		float r, s, h, l;
		r = (float)atof(allValues[0]);
		s = (float)atof(allValues[1]);
		h = (float)atof(allValues[2]);
	
		l = sqrt((r*r) + (h*h));
		float noCorns = 3.1415*r*l*s;
		int corns = ceil(noCorns);
		printf("%d\n", corns);
	}
	return 0;
}