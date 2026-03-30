#include <iostream>
using namespace std;
int main() {
	int n,m,i,j,min,cnt=0;
	cin >> n >> m;
	int a[100][100];
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			cin >> a[i][j];
		}
	}
	for(i=1; i<=n; i++) {
		int max=a[i][1];
		for(j=1; j<=m; j++) {
			if(max < a[i][j])
				max=a[i][j];
		}
		cout << max << endl;
	}
	return 0;
}