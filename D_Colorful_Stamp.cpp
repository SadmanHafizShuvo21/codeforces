#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') {
            continue;
        }

        ll a = 0, b = 0;
        while (s[i] != 'W' && i < n) {
            if (s[i] == 'R') {
                a++;
            } 
            else {
                b++;
            }
            i++;
        }
        if (a == 0 || b == 0) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    std::cout << "YES" << '\n';
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
