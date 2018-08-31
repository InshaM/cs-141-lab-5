//include in the library
#include <iostream>
using namespace std;
int main () {
	//Assigning the variables
	char k,a,e,i,o,u;
	cout << " What is your favourite alphabet  " <<endl;
	cin>>k;
	//giving the required conditions
	if (k=='a' || k=='e' || k=='i' || k=='o' || k=='u' )
	//printing the required output
	cout << "Your favourite alphabet " << k << " is a vowel. " <<endl;
	else  // else does this one.
	cout<< " Your favourite alphabet " << k << " is a consonant. " <<endl;
	return 0 ;
} 
