#include <bits/stdc++.h>
using ll = long long;

ll get_sum(int i, ll m, const std::vector<ll>& pref, ll cycle_sum, int n) {
    if (m == 0) return 0;
    ll full_cycles = m / n;
    int p = m % n;
    ll sum = full_cycles * cycle_sum;
    if (p == 0) return sum;
    if (i + p <= n) {
        sum += pref[i + p] - pref[i];
    } else {
        int remain = p - (n - i);
        sum += (pref[n] - pref[i]) + (pref[remain] - pref[0]);
    }
    return sum;
}

void solve() {
    int n, k;
    ll x;
    std::cin >> n >> k >> x;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
    }
    ll cycle_sum = pref[n];

    if (cycle_sum * k < x) {
        std::cout << "0\n";
        return;
    }

    ll total = 0;

    for (int i = 0; i < n; i++) {
        ll low = 1, high = (ll)k * n;
        ll m_i = high + 1;
        while (low <= high) {
            ll mid = (low + high) / 2;
            ll s = get_sum(i, mid, pref, cycle_sum, n);
            if (s >= x) {
                m_i = mid;
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }

        if (m_i > (ll)k * n) {
            continue;
        }

        ll ceil_val = (m_i + i + n - 1) / n;
        ll c_max = k - ceil_val;
        if (c_max >= 0) {
            total += c_max + 1;
        }
    }

    std::cout << total << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}