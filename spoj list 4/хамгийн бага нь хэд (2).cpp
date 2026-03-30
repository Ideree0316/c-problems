#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
  int n,b,c,m=0;
  cin >>b>>n;
  int a[b][n];
  for(int i=0; i<b; i++){
      for(int j=0; j<n; j++){
          cin  >>a[i][j];
      }
  }
  c=a[0][0];
  for(int i=0; i<b; i++){
      for(int j=0; j<n; j++){
         if(c>a[i][j]){
             c=a[i][j];
        }
      }
  }
  for(int i=0; i<b; i++){
      for(int j=0; j<n; j++){
         if(c==a[i][j]){
             m=m+1;
        }
      }
  }
  cout <<c<<" "<<m;
    return 0;
}