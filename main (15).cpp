#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >>n;
    while(n--){
        int m;
        cin >>m;
        int ans=1;
        int ans1;
        vector<int> a(m);
        for(int i=0; i<m; i++){
            cin >>a[i];
        }
        sort(a.begin(), a.end());
        if(m==5){
            cout <<a[0]*a[1]*a[2]*a[3]*a[4];
        }else{
            ans=a[0]*a[1]*a[m-1]*a[m-2]*a[m-3];
            ans1=a[0]*a[1]*a[2]*a[3]*a[m-1];
            cout <<max(ans, ans1);
        }
        cout <<"\n";
    }
    
    return 0;
}