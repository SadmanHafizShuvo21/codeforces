#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve(){
    ll w, h, d, n;
    std::cin >> w >> h >> d >> n;

    for (ll i = 1; i * i <= w; i++) { 
        if (w % i == 0) {
            for (ll x : {i, w / i}) { 
                if (n % x == 0) { 
                    for (ll j = 1; j * j <= h; j++) { 
                        if (h % j == 0) { 
                            for (ll y : {j, h / j}){
                                if (n % (x * y)) {
                                    continue;
                                }
                                ll z = n / (x * y);
                                if (x * y * z == n && d % z == 0){
                                    std::cout << x - 1 << " " << y - 1 << " " << z - 1 << "\n";
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    std::cout << -1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--){
    //     solve();
    // }
    solve();
}
