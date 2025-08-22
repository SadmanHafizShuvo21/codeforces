#include <bits/stdc++.h>
using ll = long long;
std::vector<ll> a;
std::vector<std::string>s;
void precompute() {
    a = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    s = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
}
void solve() {
    ll n;
    std::cin >> n;

    std::string ans;
    for (int i = 0; i < a.size(); i++) {
        while (n >= a[i]) {
            n -= a[i];
            ans += s[i];
        }
    }

    std::cout << ans << "\n";
}



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    precompute();
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
