#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,i,sum=0,b=-12345623,j,g;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++){
        cin >>a[i];
    }
    for(i=0; i<n; i++){
        sum=max(a[i], sum+a[i]);
        b=max(b,sum);
    }
    cout <<b;
    

    return 0;
}
