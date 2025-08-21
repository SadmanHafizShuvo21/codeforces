#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::string a, b, c;
    std::cin >> n >> a >> m >> b >> c;
    std::string pre, suf = a;
    for (int i = 0; i < m; i++) {
        if (c[i] == 'V') {
            pre = b[i] + pre;
        }
        else {
            suf += b[i];
        }
    }
    std::cout << pre + suf << "\n";
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
