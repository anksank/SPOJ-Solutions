#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int position;
		cin>>position;
		int x,y;
		if(position % 2 == 0){
			x = position/2;
			if(x % 2 == 0)
				x = -1*x;
			if((position + 2) % 4 == 0) y = (position+2)/2;
			else y = (-1*(position/2));
		}
		else {
			x = (position + 1)/2;
			if(x % 2 == 0)
				x = -1*x;
			if(position == 1) y = 0;
			else {
				if((position + 1) % 4 == 0) y = (position + 1)/2;
				else y = (-1*((position - 1)/2));
			}
		}
		cout<<x<<" "<<y<<"\n";
	}
	return 0;
}