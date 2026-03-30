#include <iostream>
using namespace std;
int main(){
int a[1000][1000],n,s=0,k,i,m;
cin>>n;
m=n;
for(k=1;k<=n;k++){
for(i=1;i<=m;i++){
cin>>a[k][i];
}
}
for(k=1;k<=n;k++){
for(i=1;i<=m;i++){
if(k==i){
s=s+a[k][i]*a[k][i];
}
}
}
cout<<s;
return 0;
}