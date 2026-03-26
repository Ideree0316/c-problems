#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());

    vector<int> pos(n); // pos[i] = index of sorted[i] in original array
    unordered_map<int,int> val_to_index;
    for(int i = 0; i < n; i++) val_to_index[arr[i]] = i;
    for(int i = 0; i < n; i++) pos[i] = val_to_index[sorted[i]];

    int seg = 1;
    for(int i = 1; i < n; i++)
        if(pos[i] < pos[i-1]) seg++;

    while(m--) {
        int b, c;
        cin >> b >> c;
        b--; c--;

        swap(arr[b], arr[c]);
        val_to_index[arr[b]] = b;
        val_to_index[arr[c]] = c;

        for(int i = 0; i < n; i++) pos[i] = val_to_index[sorted[i]];

        seg = 1;
        for(int i = 1; i < n; i++)
            if(pos[i] < pos[i-1]) seg++;

        cout << seg << "\n";
    }
}