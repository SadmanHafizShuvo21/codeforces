#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::queue<ll> q;
    std::multiset<ll> s;

    while (n--) {
        ll type;
        std::cin >> type;
        if (type == 1) {
            ll x; 
            std::cin >> x;
            q.push(x);
        } 
        else if (type == 2) {
            if (!s.empty()) {
                auto it = s.begin();
                std::cout << *it << "\n";
                s.erase(it);
            } 
            else {
                std::cout << q.front() << "\n";
                q.pop();
            }
        } 
        else {
            while (!q.empty()) {
                s.insert(q.front());
                q.pop();
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
