#include <iostream>
using namespace std;
int main()
{
long long a[100], n, i;
cin >> n;
a[0]=1;
a[1]=2;
a[2]=4;
for(i=3; i<=n; i++)
a[i]=a[i-1]+a[i-2]+a[i-3];
cout << a[n];
}