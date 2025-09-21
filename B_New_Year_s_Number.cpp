#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;

    std::cout << (n / 2020 >= n % 2020 ? "YES" : "NO") << "\n";
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
