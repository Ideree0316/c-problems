#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
   int n,i,b;
   cin >>n;
   a[1]=1;
   a[2]=1;
   for( i=3; i<=n;i++){
       a[i]=a[i-1]+a[i-2];
   }
   cout <<a[n];
	return 0;
}