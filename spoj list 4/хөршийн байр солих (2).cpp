#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int n,i,j=1,m=0;
	cin >>n;
     int a[n];
     for(i=0; i<n; i++){
         cin >>a[i];
     }
     for(i=0; i<n-1; i=i+2){
         swap(a[i],a[i+1]);
     }
     for(i=0; i<n; i++){
     cout <<a[i]<<" ";
     }
	return 0;
}