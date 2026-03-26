#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    long long n;
    cin >>n;
    vector<int> stick(n);
    for(int i=0; i<n; i++){
        cin >>stick[i];
    }
    sort(stick.begin(), stick.end());
    long long mid=stick[n/2];
    long long ans=0;
    for(int i=0; i<n; i++){
        ans+=(abs(stick[i]-mid));
    }
    cout <<ans;
    return 0;
}
