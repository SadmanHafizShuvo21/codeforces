#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll inf = 1e18;
const ll mod = 1e9 + 7;

//-----------------------------------------------------
void solve() {
    ll n, m;
    std::cin >> n >> m;
    ll a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }


    ll ans = inf;
    for (int i = 0; i < n; i++) {
        ll x = a[i][0];
        for (int j = 1; j < m; j++) {
            x ^= a[i][j];
            x ^= a[j][i];
        }
        ans = std::min(ans, x);
    }
    std::cout << ans << '\n';
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