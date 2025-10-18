#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;
    
void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    std::vector<ll> ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ans.push_back(i + 1);
        }
    }

    std::cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}