#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    for (ll i = 0; i < n - 1; i++) {
        std::string str = s.substr(i, 2);
        
        if(s.find(str , i + 2) != std::string::npos){
            std::cout<< "YES" << "\n";
            return;
        }
    }
    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
