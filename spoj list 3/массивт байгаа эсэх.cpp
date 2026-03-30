#include <iostream>
using namespace std;

int main() {
	int n,i,b;
	cin >>n;
	int a[n];
	for ( i=0; i<n; i++){
		cin >>a[i];
	}
	cin >>b;
	for ( i=0; i<n; i++){
		if ( a[i]==b){
			cout <<"YES";
			return 0;
		}
	}cout <<"NO";

	return 0;
}