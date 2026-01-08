#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

std::vector<ll> arr;
void precompute() {
    for (int i = 1; i <= 10001; i++) {
        if (i % 3 != 0 && i % 10 != 3) {
            arr.push_back(i);
        }
    }
}
void solve() {
    ll n;
    std::cin >> n;
    std::cout << arr[n-1] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}