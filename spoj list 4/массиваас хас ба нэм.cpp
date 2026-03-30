#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int n,i,d,b,c;
   cin >>n;
   vector<int> a;
   for(i=0; i<n; i++ ){
       int j;
       cin >>j;
       a.push_back(j);
   }
   cin >>d>>b>>c;
   a.erase(a.begin()+d-1);
   a.insert(a.begin()+b-1,c);
   for(i=0; i<n; i++){
       cout <<a[i]<<" ";
   }
}