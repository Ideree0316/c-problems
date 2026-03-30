#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
     int n,i,j=0,b=1;
     cin >>n;
     int a[n];
     for(i=0; i<n; i++){
         cin >>a[i];
     }
     for(i=0; i<n; i++){
         if(a[i]==a[i+1]){
             b=b+1;
             j=max(j,b);
         }else{
             b=1;
         }
     }
     cout <<j;
   return 0;
}