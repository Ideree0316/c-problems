#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,i,j,k=0;
    cin >>n;
    int a[n];
    for(i=0; i<n; i++){
        cin >>a[i];
    }
    for(i=1; i<n+1; i++){
        if(a[i]!=a[i-1]){
            k++;
        }
    }
    cout <<k;
    return 0;
}