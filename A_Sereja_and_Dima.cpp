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
    
    ll l = 0, r = n - 1, s = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (a[l] >= a[r] && i % 2 == 0) {
            s += a[l];
            l++;
        }
        else if (a[l] < a[r] && i % 2 == 0) {
            s += a[r];
            r--;
        }
        else if (a[l] >= a[r] && i % 2 == 1) {
            d += a[l];
            l++;
        }
        else if (a[l] < a[r] && i % 2 == 1) {
            d += a[r];
            r--;
        }
    }
    std::cout << s << " " << d << "\n";
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