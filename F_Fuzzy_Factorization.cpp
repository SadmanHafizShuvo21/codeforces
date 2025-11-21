#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

std::vector<std::pair<ll, ll>> fact(ll n) {
    std::vector<std::pair<ll, ll>> pr;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ll cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            pr.push_back({i, cnt});
        }
    }
    if (n > 1) {
        pr.push_back({n, 1});
    }
    return pr;
}

void solve() {
    std::string s;
    std::cin >> s;
    
    if (s.size() <= 18) {
        ll n = stoll(s);
        std::vector<std::pair<ll, ll>> pr = fact(n);
        std::cout << pr.size() << "\n";
        std::sort(pr.begin(), pr.end());
        for (int i = 0; i < pr.size(); i++) {
            std::cout << pr[i].first << " " << pr[i].second << "\n";
        }
        return;
    }

    ll len = s.size();
    ll x = (len - 1);

    std::cout << 2 << "\n";
    std::cout << 2 << " " << x << "\n";
    std::cout << 5 << " " << x << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
