#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    ll temp = n, sum = 0;
    while (temp) {
        sum += temp % 3;
        temp /= 3;
    }
    if (sum > k) {
        std::cout << -1 << "\n";
        return;
    }
    if (k >= n) {
        std::cout << 3 * n << "\n";
        return;
    }

    std::vector<ll> pref(40, 0);
    pref[0] = 1;
    for (int i = 1; i < 40; i++) {
        pref[i] = pref[i - 1] * 3;
    }

    std::vector<ll> a;
    temp = n;
    while (temp) {
        a.push_back(temp % 3);
        temp /= 3;
    }

    ll l = a.size();
    ll cost = 0;
    for (ll i = 0; i < l; i++) {
        if (i == 0) {
            cost += a[i] * 3;
        } 
        else {
            ll x = pref[i + 1] + pref[i - 1] * i;
            cost += a[i] * x;
        }
    }

    ll t = sum, save = 0;
    std::vector<ll> b = a;
    for (ll i = l - 1; i > 0; i--) {
        if (t + 2 * b[i] <= k) {
            save += b[i] * pref[i - 1];
            t += 2 * b[i];
            b[i - 1] += 3 * b[i];
        } 
        else {
            ll num = (k - t) / 2;
            save += num * pref[i - 1];
            break;
        }
    }
    std::cout << cost - save << "\n";
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
