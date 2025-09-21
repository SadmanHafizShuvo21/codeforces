#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin >> n;
    for (int i = 2; i < 31; i++) {
        ll t = (1 << i) - 1;
        if (n % t == 0) {
            std::cout << n / t << "\n";
            return;
        }
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
