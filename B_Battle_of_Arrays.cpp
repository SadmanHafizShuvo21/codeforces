#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve(){
    ll n, m;
    std::cin >> n >> m;

    std::priority_queue<ll> a, b;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a.push(x);
    }

    for (int i = 0; i < m; i++) {
        ll x;
        std::cin >> x;
        b.push(x);
    }

    ll t = 0;
    while(!a.empty() && !b.empty()) {
        ll x = a.top();
        ll y = b.top();
        b.pop();
        if (y > x) {
            b.push(y - x);
        }
        std::swap(a, b);
        t ^= 1;
    }
    std::cout << (t == 1 ? "Alice" : "Bob") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
    // solve();
}
