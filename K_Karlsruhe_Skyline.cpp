#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;
    
void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;
    
    if (a + b >  n + 1 || (a + b == 2 && n > 1)) {
        std::cout << "no" << "\n";
        return;
    }

    std::cout << "yes" << "\n";
    if (b == 1) {
        for (int i = 1; i <= a - 2; i++) {
            std::cout << i << " ";
        }
        std::cout << n - 1 << " ";
        for (int i = a - 1; i <= n - 2; i++) {
            std::cout << i << " ";
        }
        std::cout << n << "\n";
        return;
    }
    std::vector<ll> arr;
    for (int i = 1; i <= a - 1; i++) {
        arr.push_back(i);
    }
    arr.push_back(n);
    for (int i = a; i <= n - b; i++) {
        arr.push_back(i);
    }
    for (int i = n - 1; i >= n - b + 1; i--) {
        arr.push_back(i);
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " \n"[i == n - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}