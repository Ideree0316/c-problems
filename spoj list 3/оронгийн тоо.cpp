#include <iostream>

using namespace std;


int main(){
   long long n,a;
   cin >>n;
    while ( n>0 ){
        n=n/10;
        a=a+1;
    }
    cout <<a;
    return 0;
}