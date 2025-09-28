#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n, m;
    std::cin >> n >> m;
    
    std::string str;
    std::cin >> str;

    std::set<ll> s;
    for (int i = 0; i < m; i++) {
        ll a;
        std::cin >> a;
        s.insert(a);
    }

    ll x = 1;
    for (int i = 0; i < n; i++) {
        x++;
        if (str[i] == 'B') {
            while(s.count(x)) {
                x++;
            }
        }

        s.insert(x);
        if (str[i] == 'B') {
            x++;
            while(s.count(x)) {
                x++;
            }
        }
    }
    
    std::vector<ll> ans(s.begin(), s.end());
    std::cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
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
