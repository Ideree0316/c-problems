#include <iostream>
using namespace std;

int main() {
     int n,a,b=0,c=1,d,i;
     cin >>n;
     for ( i=1; i<=n; i++){
        c=1;
        b=0;
        for( d=1; d<=n; d++){
            c=c*d;
            b=b+c;
        }
     }
     cout <<b;
	return 0;
}