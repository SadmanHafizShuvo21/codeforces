#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using llx = __int128;

void solve() {
    ll n; 
    std::cin >> n;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        mp[x]++;
    }

    std::priority_queue<ll> pq;
    for (auto x : mp) {
        pq.push(x.second);
    }

    while (pq.size() > 1) {
        ll a = pq.top(); 
        pq.pop();
        
        ll b = pq.top(); 
        pq.pop();

        if (a > 1) {
            pq.push(a - 1);
        }

        if (b > 1) {
            pq.push(b - 1);
        }

        n -= 2;
    }
    std::cout << n << "\n";
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
