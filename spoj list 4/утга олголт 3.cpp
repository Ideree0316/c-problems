#include<iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
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
}