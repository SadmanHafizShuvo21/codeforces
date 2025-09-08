#include <bits/stdc++.h>
using ll = long long;

std::vector<int> apply(const std::vector<int>& a) {
    int n = (int)a.size();
    std::vector<int> cnt(n + 2, 0);
    for (int x : a) {
        cnt[x]++;
    }
    int mx = 0;
    while (cnt[mx] > 0) {
        mx++;
    }
    std::vector<int> res(n);
    for (int i = 0; i < n; i++) {
        res[i] = (a[i] < mx && cnt[a[i]] == 1) ? a[i] : mx;
    }
    return res;
}

void check(std::vector<int> &a, ll k, ll x) {
    if (k == x) {
        ll sum = std::accumulate(a.begin(), a.end(), 0LL);
        std::cout << sum << '\n';
    }
}

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (k == 0) { 
        check(a, k, 0); 
        return; 
    }

    auto b = apply(a);
    if (k == 1) { 
        check(b, k, 1); 
        return; 
    }

    auto c = apply(b);
    if (c == b) { 
        check(c, k, k); 
        return; 
    }

    auto d = apply(c);
    k % 2 == 0 ? check(c, k, k) : check(d, k, k);
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
