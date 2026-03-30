
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  long long n,i;
  double b=0,a=0,c=1;
  cin >>n;
  
  for (i=1; i<=n; i++){
      b=b+sin(i);
      a=a+cos(i);
      c=c*(a/b);
  }
   cout <<fixed<<setprecision(3)<<c;
	return 0;
}