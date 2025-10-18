#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;
    
ll ask (ll a, ll l, ll r) {
    std::cout << a << ' ' << l  << ' ' << r << '\n' << std::flush;;
    ll x;
    std::cin >> x;
    return x;
}
void solve() {
    ll n;
    std::cin >> n;
    
    ll m = ask(2,1, n) - ask(1, 1, n);
    ll l = 1, r = n, mid, ans = 0;  
    while (l <= r) {
        mid = (l + r) / 2;
        ll a = ask(1, 1, mid), b = ask(2, 1, mid);
        if (a == b) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    std::cout << "! " << ans + 1 << " " << ans + m << "\n" << std::flush;

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}