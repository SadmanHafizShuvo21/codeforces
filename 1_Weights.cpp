#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    n *= 2;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    std::map<ll, std::pair<ll, ll>> pr;
    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            pr[a[i] + a[j]] = {a[i], a[j]};
        }
    }
    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll s = b[i] + b[j];
            if (pr.count(s)) {
                auto [a1, a2] = pr[s];
                std::cout << a1 << " " << a2 << " " << b[i] << " " << b[j] << "\n";
                return;
            }

        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}