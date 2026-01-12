#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n; 
    
    std::vector<std::pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        ll a, b;
        std::cin >> a >> b;
        pr.push_back({a, 1});
        pr.push_back({b, -1});
    }

    std::sort(pr.begin(), pr.end(), [](std::pair<ll,ll>& a, std::pair<ll,ll>& b) {
        if (a.first == b.first) {
            return a.second > b.second; 
        }
        return a.first < b.first;       
    });

    // for (int i = 0; i < pr.size(); i++) {
    //     std::cout << pr[i].first << " " << pr[i].second << "\n";
    // }

    ll ans = -inf, cnt = 0;
    for (auto x : pr) {
        cnt += x.second;
        ans = std::max(ans, cnt);
    }
    
    std::cout << ans << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}