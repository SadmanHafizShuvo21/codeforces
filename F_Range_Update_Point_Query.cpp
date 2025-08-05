#include <bits/stdc++.h>
using ll = long long;

int sum_digits(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    std::set<int> s;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] > 9) {
            s.insert(i);
        }
    }

    while (q--) {
        int t;
        std::cin >> t;

        if (t == 1) {
            int l, r;
            std::cin >> l >> r;
            l--; 
            r--;
            auto it = s.lower_bound(l);

            while (it != s.end() && *it <= r) {
                int i = *it;
                a[i] = sum_digits(a[i]);

                if (a[i] <= 9) {
                    it = s.erase(it);
                }
                else {
                    it++;
                }
            }
        }

        else {
            int x;
            std::cin >> x;
            std::cout << a[x - 1] << "\n";
        }
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
}
