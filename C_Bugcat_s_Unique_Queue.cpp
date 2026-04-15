// 15 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;

    std::vector<ll> q;
    std::vector<bool> vis(m + 1, false);

    ll track = 0;
    while(n--) {
        ll type;
        std::cin >> type;
        
        if (type == 1) {
            ll x;
            std::cin >> x;
            if (!vis[x]) {
                q.push_back(x);
                vis[x] = true;
            }
        }
        else if (type == 2) {
            vis[q[track]] = false;
            track++;
        }
        else {
            ll x;
            std::cin >> x;
            std::cout << (track + x - 1 >= q.size() ? -1 : q[track + x - 1]) << "\n";
        }
    }
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