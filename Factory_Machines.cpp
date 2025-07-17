#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, t;
    std::cin >> n >> t;
    
    std::vector<ll>a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll low = 1, high = 1e18;
    while (low < high) {
        ll mid = (low + high) / 2;
        ll x = 0;
        for (int i = 0; i < n; i++) {
            x += mid / a[i];
            if (x >= t) {
                break; 
            }
        }
        if (x >= t) {
            high = mid;
        } 
        else {
            low = mid + 1;
        }
        std::cout << low << " " << high << "\n";
    }

    std::cout << low << "\n";
}

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr);

    solve();
}