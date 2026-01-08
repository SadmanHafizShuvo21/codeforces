#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    // std::vector<ll> a(n);
    // std::map<ll, ll> mp;
    // for (int i = 0; i< n; i++) {
    //     std::cin >> a[i];
    //     mp[a[i]]++;
    // }

    if (n % 2 == 0) {
        std::cout << n - 4 << " " << 4 << "\n";
        return;
    }
    // else {
    //     std::cout << n / 2 << " " << n / 2 << "\n";
    // }
    ll a = 9, b = n - 9;
    // while(std::__gcd(a,b) == 1 && a + b != n) {
    //     a++;
    //     b--;
    // }
    std::cout << a << " " << b << "\n";
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