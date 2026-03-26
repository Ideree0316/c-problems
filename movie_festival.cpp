#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<pair<int, int>> movies;
    for(int i=0; i<n; i++){
        int a, b;
        cin >>a>>b;
        movies.push_back({a, b});
    }
    sort(movies.begin(), movies.end(), [](auto &a, auto &b){
        return a.second < b.second;
    });
    int count=0, last=0;
    for(auto &m : movies){
        if(m.first >= last){
            count++;
            last=m.second;
        }
    }
    cout <<count<<"\n";
    return 0;
}