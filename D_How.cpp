#include <bits/stdc++.h>
using ll = long long;

ll fact(ll n) {
    if (n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
void solve() {
    ll n;
    std::cin >> n;
    
    std::cout << (n > 19 ? "0000" : std::to_string((ll)fact(n)%10000));
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
