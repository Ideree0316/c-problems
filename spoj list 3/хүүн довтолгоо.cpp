#include<bits/stdc++.h>
using namespace std;
long long a[10001];
int main()
{
a[1]=1;
a[2]=2;
a[3]=3;
long long n;
cin>>n;
for(int i=4;i<=n;i++)
a[i]=a[i-1]+a[i-2];
cout<<a[n];
return 0;
}