#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
     int n,m,i,a=0;
     cin >>n>>m;
     for(i=0; i<=m; i++){
         a=a+pow(n,i);
     }
     cout <<a;
   return 0;
}