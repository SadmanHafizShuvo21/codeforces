#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll inf = 1e18;
const ll mod = 1e9 + 7;

//-----------------------------------------------------
void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);

    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }

    std::vector<ll> x(m), y(m), z(m);
    for (int i = 0; i < m; i++) {
        std::cin >> x[i] >> y[i] >> z[i];
        mp[x[i]]++;
        mp[y[i]]++;
    }

    for (int i = 0; i < m; i++) {
        if (mp[x[i]] >= 1 && mp[y[i]] >= 1) {
            mp[z[i]]++;
        }
    }

    std::cout << mp.size() << "\n";
}

//---------------------------------------------
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}