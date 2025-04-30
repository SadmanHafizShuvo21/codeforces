#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::set<ll> s;
    s.insert(0);
    ll sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (s.count(sum)) {
            count++;
            s.clear();
        } 
        s.insert(sum);
    }

    std::cout << count << "\n";
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
