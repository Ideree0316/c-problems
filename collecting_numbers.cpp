#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
signed main() {

	int n,m;
	cin >>n>>m;
	int d=m;
	vector<int> num1(n);
	for(int i=0; i<n; i++) {
		cin >>num1[i];
	}
	vector<int> ans;
	while(m--) {
        int count=1;
		int b,c;
		cin >>b>>c;
        b--; 
        c--;
		swap(num1[b], num1[c]);
        vector<pair<int, int>> num2;
        for(int i=0; i<n; i++){
            num2.push_back({num1[i], i});
        }
        sort(num2.begin(), num2.end());
		for(int i=1; i<n; i++) {
			if(num2[i-1].second>num2[i].second) {
				count++;
			}
		}
        cout <<count<<"\n";
	}
	return 0;
}