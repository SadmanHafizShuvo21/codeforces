#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> l(n), r(n), v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> l[i] >> r[i] >> v[i];
    }

    std::vector<int> ord(n);
    std::iota(ord.begin(), ord.end(), 0);
    std::sort(ord.begin(), ord.end(), [&](int i, int j){
        return l[i] < l[j];
    });

    std::priority_queue<std::pair<ll,int>> pq;
    ll x = k;
    int idx = 0;
    while (true) {
        while (idx < n && l[ord[idx]] <= x) {
            pq.emplace(v[ord[idx]], ord[idx]);
            idx++;
        }
        bool ok = false;
        while (!pq.empty()) {
            auto [rv, i] = pq.top();
            if (r[i] < x || rv <= x) {
                pq.pop();
            } 
            else {
                x = rv;
                pq.pop();
                ok = true;
                break;
            }
        }
        if (!ok) {
            break;
        }
    }

    std::cout << x << "\n";
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
