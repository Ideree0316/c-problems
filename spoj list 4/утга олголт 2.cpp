#include<iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
			a = i * n;
			for(int j=a; j>=a-n+1; j--) {
				cout <<" "<<j;
			}
		cout << "\n";
	}
	return 0;
}
