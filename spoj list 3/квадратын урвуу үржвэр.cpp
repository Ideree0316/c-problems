
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n,a,c,d,e,i;
    double b=1;
    cin >>n;
    for ( i=1; i<=n; i++){
        b=b*(1+1/pow(i,2));
    }
    cout <<fixed<<setprecision(3)<<b;
    return 0;
}