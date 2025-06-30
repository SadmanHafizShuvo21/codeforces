#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n, k;
    std::cin >> n >> k;
    
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    ll m = n / 2;
    ll low = a[m], high = a[m] + k + 1;
    while (low < high) {
        ll mid = (low + high) / 2;
        auto it = std::upper_bound(a.begin() + m, a.end(), mid);
        ll ops = 0;
        for (auto i = a.begin() + m; i < it; i++) {
            ops += mid - *i;
        }
        if (ops <= k) {
            low = mid + 1;
        } 
        else {
            high = mid;
        }
    }

    std::cout << low - 1 << '\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
