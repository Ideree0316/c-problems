#include<iostream>
using namespace std;
int main() {
	int n, a,i,j;
	cin >> n;
	for (int i=n; i>=1; i--) {
	    if(n%2!=0){
		if (i%2==0) {
			a = (i - 1) * n + 1;
			for(int j=a; j<=a+n-1; j++) {
				cout <<" "<<j;
			}
		}
		if (i%2!=0) {
			a = i * n;
			for(int j=a; j>=a-n+1; j--) {
				cout <<" "<<j;
			}
		}
		cout << "\n";
	    }
	if(n%2==0){
		if (i%2!=0) {
			a = (i - 1) * n + 1;
			for(int j=a; j<=a+n-1; j++) {
				cout <<" "<<j;
			}
		}
		if (i%2==0) {
			a = i * n;
			for(int j=a; j>=a-n+1; j--) {
				cout <<" "<<j;
			}
		}
		cout << "\n";
	    }
	}
}