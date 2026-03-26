#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define int long long

signed main(){
    int t;
    while(t--){
       int m;
       cin >>m;
       vector<int> a(m);
       int count=0;
       for(int i=0; i<m; i++){
           cin >>a[i];
       }
       sort(a.begin(), a.end());
       if(m<3){
        cout <<-1<<"\n";
        return 0;
       }else{
        for(int i=1; i<m; i++){
           if(a[i-1]==a[i]){
            count++;
           }
           if(count==2){
            cout <<a[i]<<"\n";
            return 0;
           }
        }
       }

    }
    return 0;
} 