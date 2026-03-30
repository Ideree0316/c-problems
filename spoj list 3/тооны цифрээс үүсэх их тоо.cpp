#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main() {
    long long n;
    cin >> n;
    string d = to_string(n);
   
    sort(d.begin(), d.end(), greater<char>());
    
    cout << d;

    return 0;
}
