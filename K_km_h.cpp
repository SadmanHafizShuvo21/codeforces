#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

bool check(std::string s) {
    if (s == "/") {
        return true;
    }
    return false;
}
void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    ll mx = -inf;
    for (int i = 0; i < n; i++) {
        if (check(s[i])) {
            ll x = stoll(s[i - 1]);
            std::cout << (mx / 10 + 1) * 10 << "\n";
        }
        else {
            ll x = stoll(s[i]);
            std::cout << x << "\n";
            mx = std::max(mx, x);
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}