#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> pr(n);

    bool ok = false;
    for (int i = 0; i < n; i++) {
        std::cin >> pr[i].first >> pr[i].second;
        if (pr[i].second > pr[i].first) {
            ok = true;
        }
    }
    std::cout << (ok == true? "Happy Alex" : "Poor Alex");
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}