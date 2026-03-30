#include<iostream>
using namespace std;
int main() {
	int n,a,i,j;
	cin >> n;
	for(i=n; i>=1; i--){
	    for(j=0; j<n; j++){
	        a=i*n-j;
	        cout <<" "<<a;
	    }
	    cout <<"\n";
	}
	return 0;
}