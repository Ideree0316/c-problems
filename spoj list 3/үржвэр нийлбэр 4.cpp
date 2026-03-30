#include <iostream>
using namespace std;

int main() {
   int n,i,b=0,c;
   cin >>n;
   for ( i=1; i<=n; i++){
      b=b+i*(i+1)*(i+2);
          
   }
      
   
   cout <<b;
	return 0;
}