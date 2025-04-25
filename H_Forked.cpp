#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b, xk, yk, xq, yq;
    std::cin >> a >> b >> xk >> yk >> xq >> yq;
    ll x[] = {a, a, -a, -a, b, b, -b, -b};
    ll y[] = {b, -b, b, -b, a, -a, a, -a};
    
    std::set<std::pair<ll, ll>> st;
    for (int i = 0; i < 8; i++) {
        ll xx = xk + x[i], yy = yk + y[i];
        
        for (int j = 0; j < 8; j++) {
            int t1 = xx + x[j], t2 = yy + y[j];
            if (t1 == xq && t2 == yq)
                st.insert({xx, yy});
        }
    }
    std::cout << st.size() << '\n';
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
