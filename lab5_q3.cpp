//include in the library.
#include <iostream>
using namespace std;
int main(){
	//Assigning the variables.
	float a1;
	cout << " Type an integer ";
 	cin >> a1;
	//Condition
	if (a1 > 0 ){ // If a is a positive.
		cout << " The number "<<a1<<" is positive "<<endl;
		}
		else if (a1 == 0){ // If a is zero.
		cout <<" The number "<<a1<<" is zero "<<endl;
		}  // If a is a negative integer.
		else {
		cout <<" The number "<<a1<<" is negative "<<endl;
		}

	
	return 0;
}
