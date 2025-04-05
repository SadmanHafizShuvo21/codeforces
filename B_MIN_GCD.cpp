#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    ll gc=0;
    for(ll i=1;i<n;i++){
        if (a[i] % a[0] == 0) {
            gc = std::gcd(gc, a[i]);
        }
    }
    std::cout<<(gc==a[0]?"Yes":"No")<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
