#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> pr;
    std::priority_queue<ll> pq;
    for (ll i = 1; i <= n; i++) {
        pq.push(i);
    }
    for (int i = 0; i < n - 1; i++) {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();

        pq.push((a + b + 1) / 2);
        pr.push_back({a, b});
    }

    std::cout << pq.top() << "\n";
    for (ll i = 0; i < n - 1; i++) {
        std::cout << pr[i].first << " " << pr[i].second << "\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
