// Include in the library
#include <iostream>
using namespace std;
int main() {
	// Assigning variables
	int a1;
	cout<< " Type a year " ;
	// Reading the value
	cin >> a1 ;
	if(a1%4==0){  // The year which are the multiples of four are leap years. 
	cout <<a1<< " is a leap year " <<endl;
	}
	else {  // The years which are not multiples of four are not leap years.
	cout <<a1<< " is not a leap year "<<endl;
	}
	return 0 ;
} 
