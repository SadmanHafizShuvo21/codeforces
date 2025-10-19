#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve(int t) {
    ll n, a, b;
    std::cin >> n >> a >> b;

    std::vector<ll> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(1);
    }

    for (int i = 0; i < n - 1; i++) {
        ans.push_back(1);
    }
    ans.push_back(b);

    std::cout << "Case #" << t << ": ";
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
}
