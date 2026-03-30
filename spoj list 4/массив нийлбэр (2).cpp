#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
  int n,b,c=0;
  cin >>b>>n;
  int a[b][n];
  for(int i=0; i<b; i++){
      for(int j=0; j<n; j++){
          cin  >>a[i][j];
          c=c+a[i][j];
      }
  }
  cout <<c;
    return 0;
}