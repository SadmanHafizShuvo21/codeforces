#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    ll mx = 0;
    for (int i = 0; i < n; i += 2){
        if (std::max(mx, a[i]) != std::max(mx, a[i + 1])){
            std::cout << "No" << "\n";
            return;
        }
        mx = std::max(mx, a[i]) + 1;
    }
    std::cout << "Yes" << "\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
