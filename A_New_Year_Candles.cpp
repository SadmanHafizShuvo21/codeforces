#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b;
    std::cin >> a >> b;

    ll ans = a;
    ll rem = 0;
    while(a >= b) {
        ans += a / b;
        rem = (a % b);
        a = (a / b) + rem;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}