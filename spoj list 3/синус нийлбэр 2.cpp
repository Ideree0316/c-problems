#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double b,c=1,s=0,e,x;
long long n, i;
cin>>x>>n;
for(i=1; i<=n; i++){
c=c*sin(x);
s=s+c;
}
     cout <<fixed<<setprecision(3)<<s;
	return 0;
}