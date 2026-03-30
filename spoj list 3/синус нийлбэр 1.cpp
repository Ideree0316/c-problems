#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
     double n,a,c,e,d,i;
     cin >>n>>a;
     e=0;
     for( i=1; i<=a; i++){
         e=e+sin(pow(n,i));
     }
     cout <<fixed<<setprecision(3)<<e;
	return 0;
}