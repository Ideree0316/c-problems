#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    long long n;
    cin >>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >>a[i];
    }
    long long maxi=a[0];
    long long b=0;
    for(int i=0; i<n; i++){
        b+=a[i];
        if(b<a[i]){
            b=a[i];
        }
        maxi=max(b,maxi);
    }
    cout <<maxi;
    return 0;
}
