#include <bits/stdc++.h>
using ll = long long;

bool check(const std::vector<ll>& a, bool ok) {
    int n = a.size(), i = 1;

    while (i < n && (ok ? a[i] > a[i-1] : a[i] < a[i-1])) {
        i++;
    }
    if (i < 2 || i == n) {
        return false;
    }

    while (i < n && (ok ? a[i] < a[i-1] : a[i] > a[i-1])) {
        i++;
    }
    return i == n;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        if ((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1])) {
            cnt++;
        }
    }
    std::cout << (cnt == 1 ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
