#include <iostream>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >>n;
    while(n!=0){
        int m;
        cin >>m;
        int ans=1;
        int a[m];
        for(int i=0; i<n; i++){
            cin >>a[m];
        }
        if(m==5){
            for(int i=0; i<n; i++){
                 ans*=a[i];
            }
            cout <<ans<<"\n";
            
        }else{
            for(int i=0; i<n; i++){
                 ans*=a[i];
            }
            cout <<ans<<"\n";
            
        }

    }

    return 0;
}