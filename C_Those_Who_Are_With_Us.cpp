#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int ans = 0;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            ans = max(ans, a[i][j]);
        }
    }
    
    vector<array<int, 2>> arr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == ans) {
                arr.push_back({i, j});
            }
        }
    }
    
    bool okr = true, okc = true;
    int r = -1, c = -1;
    for (auto [x, y] : arr) {
        if (x != arr[0][0]) {   
            if (c == -1) {
                c = y;
            } else if (c != y) {
                okc = false;              
            }
        }
        if (y != arr[0][1]) {   
            if (r == -1) {
                r = x;
            } else if (r != x) {
                okr = false;          
            }
        }
    }
    
    ans -= (okr || okc);  
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
