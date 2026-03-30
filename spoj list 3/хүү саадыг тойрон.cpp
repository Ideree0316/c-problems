#include <iostream>
using namespace std;
long long a[10001];
int main() {
	long long n,i,b,c,k;
	cin >>n>>k;
	a[1]=1;
	a[2]=2;
	for ( i=3; i<=k-1; i++){
	    a[i]=a[i-1]+a[i-2];
	}
	for ( i=k+1; i<=n; i++){
	    a[i]=a[i-1]+a[i-2];
	}
	cout <<a[n];
	return 0;
}