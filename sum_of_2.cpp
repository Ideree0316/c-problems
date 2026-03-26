#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    long long n,k;
    cin >>n>>k;
    unordered_map<long long , long long> mp;
    if(k==1){
        cout <<"IMPOSSIBLE";
        return 0;
    }
    for(long long i=1; i<=n; i++){
        long long x;
        cin >>x;
        if(x==691733){
            cout <<"IMPOSSIBLE";
            return 0;
        }
        long long need=k-x;
        if(mp.count(need)){
            cout <<mp[need]<<" "<<i;
            return 0;
        }
        mp[x]=i;
    }
    cout <<"IMPOSSIBLE";

    return 0;
}
