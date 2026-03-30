#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long a,b,c,d,e;
	cin >>a;

	c=1;
	for ( int i=a+1; i<a+6; i++){
	    c=c*i;
	}
	cout <<c/120;
	return 0;
}
