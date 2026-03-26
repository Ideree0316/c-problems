#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    long long n;
    cin >>n;
    vector<long long> coin(n+1);
    for(int i=1; i<=n; i++){
        cin >>coin[i];
    }
    sort(coin.begin(), coin.end());
    long long sum=0;
    for(int i=1; i<=n; i++){
        if(coin[i]>sum+1){
            cout <<sum+1;
            return 0;
        }else{
            sum+=coin[i];
        }
    }
    cout<<sum+1;
    return 0;
}