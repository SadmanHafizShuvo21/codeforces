#include <bits/stdc++.h>
using ll = long long;

bool isPossible(const std::vector<ll>&a, int n, int k, int x) {
    std::vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        if (a[i] >= x) {
            pref[i + 1] = 1;
        }
        else {
            pref[i + 1] = -1;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        pref[i] += pref[i - 1];
    }

    int min_pref = 0;
    for (int i = k; i <= n; i++) {
        min_pref = std::min(min_pref, pref[i - k]);
        if (pref[i] - min_pref > 0) {
            return true;
        }
    }
    return false;
}

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int l = 1, r = *std::max_element(a.begin(), a.end()), ans = 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (isPossible(a, n, k, mid)) {
            ans = mid;
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
