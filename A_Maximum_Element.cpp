#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::stack<ll>pq;
    std::multiset<int>st;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x == 1) {
            ll y;
            std::cin >> y;
            pq.push(y);
            st.insert(y);
        }
        else if (x == 2) {
            st.erase(st.find(pq.top()));
            pq.pop();
        }
        else{
            std::cout << (*(--st.end())) << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}