#include<iostream>
using namespace std;
int main(){
int i,n;
char a[3];
for (i=0; i<3; i++){
    cin >>a[i];
}
for ( i=0; i<3; i++){
    if(a[i]>96 && a[i]<123){
        cout <<char(a[i]-32)<<" ";
    }else{
        cout <<char(a[i])<<" ";
    }
}

return 0;
}