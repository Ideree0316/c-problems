#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    
    vector<int> dp(n);
    
    dp[0] = cost[0];
    dp[1] = cost[1];
    
    for (int i = 2; i < n; i++) {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
   
    cout << dp[n - 1];

    return 0;
}
