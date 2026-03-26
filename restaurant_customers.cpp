#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<pair<int, int>> events;
    for(int i=0; i<n; i++){
        int a,b;
        cin >>a>>b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    sort(events.begin(), events.end());
    int cur_cus=0;
    int max_cus=0;
    for(auto &e : events){
        cur_cus += e.second;
        max_cus = max(max_cus, cur_cus);
    }

    cout << max_cus << "\n";

    return 0;
}