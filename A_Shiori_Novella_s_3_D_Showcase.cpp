#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n);

    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    
    ll x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll ch = s[i][j] - '0';
            ll a = (i + j) % 2;
            ll b = 1 - a;
            
            if (ch != a) {
                x++;
            }
            if (ch != b) {
                y++;
            }
        }
    }

    std::cout << std::min(x, y) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}