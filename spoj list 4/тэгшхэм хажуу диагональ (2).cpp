#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,m,i,j,b=0;
	cin >> n;
	int a[100][100];
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(a[n-1-j][n-1-i]==a[i][j]){
			    b=b+1;
			}
		}
	}
	if(n*n==b){
	    cout <<"YES";
	}else{
	    cout <<"NO";
	}
	return 0;
}