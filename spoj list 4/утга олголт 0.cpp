#include <iostream>
using namespace std;
int main()
{
  int i,j,n,a=0;
  cin >>n;
  for(i=0; i<=n-1; i++){
      for(j=1; j<=n; j++){
         a=i*n+j;
        cout <<" "<<a;
      }
       cout <<"\n";
  }

    return 0;
}