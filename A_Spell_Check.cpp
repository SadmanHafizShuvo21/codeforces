#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::string s, str = "Timur";
    std::cin >> n >> s; 
    
    std::sort(s.begin(), s.end());
    std::sort(str.begin(), str.end());
    std::cout << (s == str ? "YES" : "NO") << "\n";   
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