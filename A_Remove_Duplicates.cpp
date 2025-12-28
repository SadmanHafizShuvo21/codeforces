#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }


    std::reverse(a.begin(), a.end());
    std::map<ll, ll> mp;
    std::vector<ll> ans;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        if (mp[a[i]] == 1) {
            ans.push_back(a[i]);
        }
    }

    std::cout << ans.size() << "\n";
    std::reverse(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
