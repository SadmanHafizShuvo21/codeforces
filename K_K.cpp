#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<ll> b = a;
    std::sort(b.begin(), b.end());

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cnt++;
        }
    }
    std::cout << ((cnt == 0 || cnt == 2) ? "Sorted" : "Failed") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}