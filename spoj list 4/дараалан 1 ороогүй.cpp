#include <iostream>
using namespace std;
int main()
{
long long a[100], n, i;
cin >> n;
a[1]=2;
a[2]=3;
for(i=3; i<=n; i++)
a[i]=a[i-1]+a[i-2];
cout << a[n];
}