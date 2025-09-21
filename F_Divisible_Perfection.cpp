#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::string s;
    std::cin >> n >> s;

    if (n >= 10) {
        std::cout << "NO" << "\n";
        return;
    }

    for(int i = 0; i < n; i++) {
        ll val = 0;
        for(int j = i; j < n; j++) {
            val = val * 10 + (s[j] - '0');
            ll len = j - i + 1;
            if(val % len != 0) { 
                std::cout << "NO" << "\n";
                return;
            }
        }
    }
    std::cout << "YES" << "\n";
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
