#include <bits/stdc++.h>
using ll = long long;

bool print(ll n) {
    if (n % 8 == 0) {
        std::cout << "YES" << '\n';
        std::cout << n << '\n';
        return true;
    }
    return false;
}

void solve() {
    std::string s;
    std::cin >> s;
    ll n = s.size();

    for (int i = 0; i < n; i++) {
        ll a = s[i] - '0';
        if (print (a)) {
            return;
        }

        for (int j = i + 1; j < n; j++) {
            ll b = (s[i] - '0') * 10 + (s[j] - '0');
            if (print (b)) {
                return;
            }

            for (int k = j + 1; k < n; k++) {
                ll c = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (print (c)) {
                    return;
                }
            }
        }
    }

    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
