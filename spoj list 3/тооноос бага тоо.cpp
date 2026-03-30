#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	long long n,c,i=0,d;
	cin >> n;
	vector<int>hangai;
	while(n>0) {
		hangai.push_back(n%10);
		n=n/10;
	}
	sort(hangai.begin(), hangai.end());

	if ( hangai[0]==0) {
		while(hangai[i]==0) {
			i++;
		}
swap(hangai[0],hangai[i]);
	}
	d=0;
    for( i=0; i<hangai.size();i++){
       d=d*10+hangai[i];
    }
cout <<d;


	return 0;
}
