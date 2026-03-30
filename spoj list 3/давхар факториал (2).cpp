#include <iostream>
using namespace std;

int main() {
	int n,i,b=1;
	cin >>n;
	if ( n%2==0 ) {
		for ( i=2; i<=n; i=i+2) {
			b=b*i;
			

		}
	} else {
		for ( i=1; i<=n; i=i+2) {
			b=b*i;
		}
	}cout <<b;

	return 0;
}