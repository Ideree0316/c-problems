#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,m,i,j;
	cin >> n >> m;
	int a[100][100];
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			cin >> a[i][j];
		}
	}
	for(j=1; j<=m; j++) {
	    int min=1e9;
		for(i=1; i<=n; i++) {
			if(min > a[i][j]){
			    min=a[i][j];
			}
		}
		cout <<min<<" ";
	}
	
	return 0;
}