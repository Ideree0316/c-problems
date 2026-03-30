#include <iostream>
using namespace std;
int a[10001];
int main() {
	int n,i;
	cin >>n;
	int a[n];
	a[0]=1;
	a[1]=1;
	for ( i=1; i<=n/2; i++){
		a[i*2]=a[i]+a[i-1];
		a[i*2+1]=a[i]-a[i-1];
	}
      cout <<a[n];
	return 0;
}