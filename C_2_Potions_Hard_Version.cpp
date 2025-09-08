#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using llx = __int128;

void solve() {
    ll n; 
    std::cin >> n;

    ll sum = 0;
    std::priority_queue<ll, std::vector<ll>, std::greater<ll>> pq;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        pq.push(x);
        sum += x;

        while (sum < 0) {
            sum -= pq.top();
            pq.pop();
        }
    }
    std::cout << pq.size() << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
