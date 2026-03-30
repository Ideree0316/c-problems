#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n,i;
	double s=0,b,x;
	cin >>x>>n;
	b=sin(x);
	for ( i=1; i<=n; i++){
	    s=s+b;
		b=sin(b);
		
	}
   cout <<fixed<<setprecision(3)<<s;
	return 0;
}