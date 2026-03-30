
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n,i;
    cin >>n;
    double b=0;
    for( i=1; i<=n; i++){
        b=sqrt(2+b);
    }
    cout <<fixed<<setprecision(9)<<b;
    return 0;
}