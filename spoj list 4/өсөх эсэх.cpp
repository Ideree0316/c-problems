#include <iostream>
using namespace std;
int main() {
    int n,b,c,d=0,i;
    cin >>n;
    int a[n];
    for(i=0; i<n; i++){
        cin >>a[i];
    }
    for(i=1; i<n; i++){
        if(a[i-1]>=a[i]){
            cout<<"NO";
            return 0;
        }
    }
        cout <<"YES";
    return 0;
}