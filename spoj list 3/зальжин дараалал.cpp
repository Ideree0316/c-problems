#include <iostream>
using namespace std;
 long long a[10001];
int main()
{
    int n,i;
    cin >>n;
   
    a[0]=1;
    a[1]=1;
    a[2]=2;
    for ( i=2; i<=n; i++){
        a[2*i]=a[i]+1;
        a[2*i-1]=a[2*i]+a[i-1];
    }
cout <<a[n];
    return 0;
}