#include <bits/stdc++.h>
using ll = long long;
void solve(int t) {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::map<ll, ll> mp;
    ll sum = 0, ans = 0;
    mp[0]++;

    for (int i = 0; i < n; i++) {
        sum = (sum + a[i]) % m;
        ans += mp[sum];
        mp[sum]++;
    }

    printf("Case %d: %lld\n", t, ans);
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
