#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k; std::cin >> n >> k;
    std::string s, s1; {
        std::cin >> s;
    }

    for (int i = 0; i < n; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            int d = std::min(std::abs(s[i] - c), 26 - std::abs(s[i] - c));
            if (d <= k && (i != n - 1 || (k - d) % 2 == 0)) {
                s1 += c;
                k -= d;
                break;
            }
        }
    }

    std::cout << s1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t; 
    std::cin >> t;
    while (t--) {
        solve();
    }
}
