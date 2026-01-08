#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    std::map<std::string, ll> a = {{"Tetrahedron" , 4}, {"Cube", 6}, {"Octahedron" , 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        std::string x;
        std::cin >> x;
        ans += a[x];
    }

    std::cout << ans << "\n";
    
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