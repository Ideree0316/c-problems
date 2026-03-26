#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n,k;
    cin >>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >>a[i];
    }
    sort(a.begin(), a.end());
    int i=0, j=n-1, count=0;
    while(i<=j){
        if(a[i]+a[j]<=k){
            count++;
            i++;
            j--;
        }else{
            j--;
            count++;
        }
        
    }
    cout <<count;
    return 0;
}