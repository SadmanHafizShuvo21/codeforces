// 07 Feb 2026
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
    std::vector<int> a(n);
    std::map<ll, ll> freq;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        freq[a[i]]++;
    }

    ll mx = *std::max_element(a.begin(), a.end());
    std::vector<ll> pref(mx + 2, 0);
    for (int i = mx; i >= 1; i--) {
        pref[i] = pref[i + 1] + freq[i];
    }

    ll add = 0;
    std::string ans;
    for (int i = 1; i <= mx; i++) {
        ll cur = pref[i] + add;
        ans.push_back(char('0' + (cur % 10)));
        add = cur / 10;
    }

    while (add > 0) {
        ans.push_back(char('0' + (add % 10)));
        add /= 10;
    }

    std::reverse(ans.begin(), ans.end());
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
