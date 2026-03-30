#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int i,j=0,d=0,n;
    vector<int> a;
    while(cin >>n){
        a.push_back(n);
    }
    for(i=1; i<a.size()-1; i++){
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            d++;
        }else if(a[i]<a[i-1] && a[i]<a[i+1]){
            j++;
        }
    }
    cout <<d<<" "<<j;
    return 0;
}