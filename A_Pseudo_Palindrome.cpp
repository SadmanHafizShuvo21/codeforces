#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<int> primes;

void solve() {
    ll n, d;
    std::cin >> n >> d;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    if (n % 2 == 0) {
        for (int i = 1; i < n; i += 2) {
            if (a[i] - a[i - 1] > d) {
                std::cout << "NO" << "\n";
                return;
            }
        }
        std::cout << "YES" << "\n";
    }
    else {
        for (int i = 0; i < n; i++) {
            std::vector<ll> v;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                v.push_back(a[j]);
            }

            bool ok = true;
            for (int j = 1; j < n - 1; j += 2) {
                if (v[j] - v[j - 1] > d) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                std::cout << "YES" << "\n";
                return;
            }
        }
        std::cout << "NO" << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

