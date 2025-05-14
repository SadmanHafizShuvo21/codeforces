#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll l = 0, r = n - 1;
    int A = 0, B = 0, step = 0, sumA = 0, sumB = 0;
    bool ok = true;

    while (l <= r) {
        ll curr = 0;
        if (ok) {
            while (l <= r && curr <= B) {
                curr += a[l++];
            }
            A = curr;
            sumA += curr;
        } 
        else {
            while (l <= r && curr <= A) {
                curr += a[r--];
            }
            B = curr;
            sumB += curr;
        }
        step++;
        ok = !ok;
    }

    std::cout << step << " " << sumA << " " << sumB << "\n";
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
