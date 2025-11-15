#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve(int t) {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll maxi = *std::max_element(a.begin(), a.end());
    if (a[0] == maxi) {
        std::cout << "Case " << t << ": Humanity is doomed!" << "\n";
        return;
    }
    v = a;
    std::reverse(v.begin(), v.end());

    ll mn = inf, mx = -inf, fi = -inf , pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > mx) {
            mx = a[i];
        }
        if (v[i] < mn) {
            mn = v[i];
        }

        // std::cout << mn << " " << mx << "\n";
        if (mn == mx) {
            std::cout << "Case " << t << ": " << i + 1 << "\n";
            return;
        }
    }
    

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
}
