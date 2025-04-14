#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    for(int i = 0; i < 3; i++){
        std::string a;
        std::cin >> a;
        s+=a[0];
    }   
    std::cout << s << "\n";
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
