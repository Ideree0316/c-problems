
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  int n,i;
  double  b=0, m;
   cin >>n;
    double a[n];
   for ( i=0; i<n; i++){
       cin >>a[i];
       b=b+a[i];
   }
   m=b/n;
cout <<fixed<<setprecision(2)<<m;
    return 0;
}