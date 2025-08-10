#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    std::vector<ll> v;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            std::cout << a[i] << ' ';
        }
        else {
            v.push_back(a[i]);
        }
    }
    std::cout << a[n - 1] << " ";

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
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
