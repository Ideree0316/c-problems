#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   int n,i;
   double b,a=0;
   cin >>n;
   
   for ( i=n; i>=1 ;i--){
        a=a+i;
       a=cos(a);
   }
   cout <<fixed<<setprecision(3)<<a;
	return 0;
}