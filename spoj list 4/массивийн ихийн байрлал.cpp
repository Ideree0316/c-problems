#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
  int n,b,c=0,m,l;
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
         if(c<a[i][j]){
             c=a[i][j];
             m=i;
             l=j;         }
      }
  }
  cout <<c<<" "<<m+1<<" "<<l+1;
    return 0;
}