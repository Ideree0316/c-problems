#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int a,b,c,d,i;
    cin >>a>>b;
    vector<pair<int,int>> v(b);
    for(i=0; i<b; i++){
        cin >>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());
    for(i=0; i<b; i++){
        if(a>v[i].first){
        a+=v[i].second;
        }else{
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES";
    return 0;
}