#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n,i,b;
   cin >>n;
   long long a[10001];
   a[0]=1;
   a[1]=1;
   
   for( i=2; i<=n;i++){
       a[i]=(a[i-1]+a[i-2])%10;
   }
   cout <<a[n];
	return 0;
}