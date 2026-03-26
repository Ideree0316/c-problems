#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    
    int n,m;
    cin >>n>>m;
    multiset<int> ticket;
    for(int i=0; i<n; i++){
        int a;
        cin >>a;
        ticket.insert(a);
    }
    for(int i=0; i<m; i++){
        int x;
        cin >>x;
        auto it=ticket.upper_bound(x);
        if(it==ticket.begin()){
            cout <<-1<<"\n";
        }else{
            it--;
            cout <<*it<<"\n";
            ticket.erase(it);
        }
    }
    return 0;
}