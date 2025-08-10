#include <bits/stdc++.h>
using ll = long long;

void solve(){
    int n; ll k;
    std::cin >> n >> k;
    std::vector<ll> a(n), b(n);
    for(int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        std::cin >> b[i];
    }

    auto check = [&](ll x){
        if(k == 0) {
            return x;
        }
        ll r = x % k;
        return std::min(r, (k - r) % k);
    };

    for(int i=0; i<n; i++) {
        a[i] = check(a[i]);
    }
    for(int i=0; i<n; i++) {
        b[i] = check(b[i]);
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    std::cout << (a == b ? "YES" : "NO") << "\n";
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
