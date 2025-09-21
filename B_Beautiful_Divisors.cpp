#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;

    ll ans = 1;
    for (int i = 1; i <= 10; i++) {
        ll v = ((1 << i) - 1) << (i - 1);
        
        if (v > n) {
            std::cout << ans << "\n";
            return;
        }

        if (n % v == 0) {
            ans = v;
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}