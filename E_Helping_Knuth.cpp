// 14 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] != -1) {
            mp[a[i]]++;
        }
    }

    std::vector<ll> arr;
    for (int i = 1; i <= n; i++) {
        if (mp[i] == 0) {
            arr.push_back(i);
        }
    }

    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            a[i] = arr.back();
            arr.pop_back();
        }
    }
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
    // solve();
}