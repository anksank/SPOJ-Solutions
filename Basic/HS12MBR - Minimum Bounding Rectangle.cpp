#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int minX = 1000;
		int minY = 1000;
		int maxX = -1000;
		int maxY = -1000;
		for(int i = 0; i<n; i++){
			char figureType;
			cin>>figureType;
			if(figureType == 'p'){
				int x,y;
				cin>>x>>y;
				if(x < minX) minX = x;
				if(y < minY) minY = y;
				if(x > maxX) maxX = x;
				if(y > maxY) maxY = y;
			}
			else if(figureType == 'c'){
				int x,y,r;
				cin>>x>>y>>r;
				if((x-r) < (minX)) minX = x-r;
				if((y-r) < (minY)) minY = y-r;
				if((x+r) > (maxX)) maxX = x+r;
				if((y+r) > (maxY)) maxY = y+r;
			}
			else {
				int x1,y1,x2,y2;
				cin>>x1>>y1>>x2>>y2;
				if(x1 < minX) minX = x1;
				if(y1 < minY) minY = y1;
				if(x2 < minX) minX = x2;
				if(y2 < minY) minY = y2;
				
				if(x1 > maxX) maxX = x1;
				if(y1 > maxY) maxY = y1;
				if(x2 > maxX) maxX = x2;
				if(y2 > maxY) maxY = y2;

			}
		}
		cout<<minX<<" "<<minY<<" "<<maxX<<" "<<maxY<<"\n";
		
	}
	
	return 0;
}
