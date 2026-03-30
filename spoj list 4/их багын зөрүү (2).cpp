#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,m,i,j,min=9897,max=-9766;
	cin >> n;
	int a[100][100];
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(max <a[i][i]){
			    max=a[i][i];
			}
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(min >a[i][n-1-i]){
			    min=a[i][n-1-i];
			}
		    
		}
	}
	cout <<max-min;
	return 0;
}