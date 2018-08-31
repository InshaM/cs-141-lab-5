//Include in the library
#include<iostream>
using namespace std;
int main() {
	// Assigning values
	int n,i;
	//loop
	cout<<" Type a natural number you want : ";
	cin>>n;
	cout<<" The multiplication table of the natural number is : " <<n<<endl;
	for(int i=1,m ; i<=100;  i++ ){
			m = n*i;
		cout<<n<<" * "<<i<<" = "<<m<<endl;
	}
return 0;
}
 	
