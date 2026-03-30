#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int i,j,d=0,n;
    vector<int> a;
    while(cin >>n){
        a.push_back(n);
    }
    for(size_t i=0; i<a.size(); i++){
        for(size_t j=i+1; j<a.size();){
            if(a[i]==a[j]){
                a.erase(a.begin()+ j);
            }else{
                j++;
            }
        }
    }
    for(i=0; i<a.size(); i++){
        cout <<a[i]<<" ";
        d++;
    }
    cout <<"\n"<<d;

    return 0;
}