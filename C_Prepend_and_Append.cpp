#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    ll l = 0, r = n - 1;
    while (s[l] != s[r]) {
        l++;
        r--;
    }
    std::cout << (r - l + 1 > 0 ? r - l + 1 : 0) << "\n";   
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