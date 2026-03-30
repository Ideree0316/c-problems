#include <iostream>
using namespace std;

int main() {
	long long n,a,b,i,j;
	cin >>n;
	b=0;
	for ( i=1; i<=n; i++) {
		a=1;
		for ( j=i; j<=2*i; j++) {
			a=a*j;
		}
		b=b+a;
	}
	cout <<b<<endl;
	return 0;
}
