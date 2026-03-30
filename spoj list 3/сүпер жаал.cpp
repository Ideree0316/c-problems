#include <iostream>
using namespace std;
long long a[10001];
int main() {
	long long n,i,b,c;
	cin >>n;
	a[1]=1;
	a[2]=2;
	a[3]=4;
	for ( i=4; i<=n; i++){
	    a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	cout <<a[n];
	return 0;
}