#include <iostream>
using namespace std;

int main() {
	string input, output;
	cin>>input;
	output = input;
	for(int i = 0; i < input.length(); i+=2){
		output.at(i) = input.at(i) - 1;
		if(input.at(i) == 'a') output.at(i) = 'z';
		if((i+1) < input.length()){
			output.at(i+1) = input.at(i+1) + 2;
			if(input.at(i) == 'y') output.at(i) = 'a';
			if(input.at(i) == 'z') output.at(i) = 'b';
		}
	}
	cout<<output;
	return 0;
}