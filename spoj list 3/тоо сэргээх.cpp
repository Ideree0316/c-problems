#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,s=0;
char a[4];
for( i=0; i<4; i++){
    cin >> a[i];
}
for ( i=0; i<4; i++){
    if ( '0'<=a[i] && a[i]<='9'){
        s=s*10+a[i]-48;
    }
}
cout <<s*s;
return 0;
}