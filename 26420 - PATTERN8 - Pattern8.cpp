#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	string first = "12";
	string second = "*8+";
	string third = "2 = ";
	string last = "98";
	for(int i = 0; i < 8; i++){
		cout<<first + second + third + last<<"\n";
		first += char(51 + i);
		third = char(51 + i);
		third = third + " = ";
		last += char(55 - i); 
	}
	return 0;
}
/*
12*8+2 = 98

123*8+3 = 987

1234*8+4 = 9876

12345*8+5 = 98765

123456*8+6 = 987654

1234567*8+7 = 9876543

12345678*8+8 = 98765432

123456789*8+9 = 987654321

 Submit solution!

*/