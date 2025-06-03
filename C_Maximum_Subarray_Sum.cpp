#include <bits/stdc++.h>
using ll = long long;
constexpr ll inf = 1E18;

ll get(const std::vector<ll> &a) {
    ll s = -inf;
    ll ans = -inf;
    for (auto x : a) {
        s = std::max(0LL, s) + x;
        ans = std::max(ans, s);
    }
    return ans;
}
void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (s[i] == '0') {
            a[i] = -inf;
        }
    }

    ll max_sum = get(a);
    if (max_sum > k) {
        std::cout << "No\n";
        return;
    }
    int x = s.find('0');
    if (x == -1) {
        if (max_sum == k) {
            std::cout << "Yes\n";
            for (int i = 0; i < n; i++) {
                std::cout << a[i] << " \n"[i == n - 1];
            }
        } 
        else {
            std::cout << "No\n";
        }
        return;
    }
    a[x] = inf;
    ll cur_sum = get(a);
    a[x] -= (cur_sum - k);
    std::cout << "Yes\n";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
    }
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