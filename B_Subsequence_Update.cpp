#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, l, r;
    std::cin >> n >> l >> r;
    l--;
    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::vector<ll> a=v,b=v;
    
    std::sort(a.begin()+l,a.end());
    std::sort(b.begin(), b.begin()+r,std::greater<ll>());

    ll suma = std::accumulate(a.begin()+l, a.begin()+r, 0LL);
    ll sumb = std::accumulate(b.begin()+l, b.begin()+r, 0LL);

    std::cout << std::min(suma,sumb) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
