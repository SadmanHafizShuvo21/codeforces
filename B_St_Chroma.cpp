#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;

    ll l = 0, r = n - 1;
    for (int i = 0; i < n; i++) {
        if(i < x){
            std::cout << l << " ";
            l++;
        }
        else{
            std::cout << r <<" ";
            r--;
        }
    }
    std::cout << "\n";
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
