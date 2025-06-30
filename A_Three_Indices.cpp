#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll idx = -1;
    for (int i = 0; i < n - 2; i++) {
        if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
            idx = i; 
            break;
        }
    }
    if (idx == -1) {
        std::cout << "NO\n";
    } 
    else {
        std::cout << "YES\n";
        std::cout << idx + 1 << ' ' << idx + 2 << ' ' << idx + 3 << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    std::cin >> t;
    while (t--) {   
        solve();
    }
}