#include <bits/stdc++.h>
using ll = long long;
const ll MAX_NUM = 1e18;
std::vector<ll> arr;

void solve() { 
    ll n, k;
    std::cin >> n >> k;

    if (n < k || k < std::__popcount(n)) {
        std::cout << "NO\n";
        return;
    }

    std::cout << "YES" <<"\n";
    std::vector<ll> a;
    for (int i = 0; i <= 30; i++) {
        if ((n >> i) & 1) {
            a.push_back(1 << i);
        }
    }

    int i = 0;
    while (a.size() < k) {
        if (a[i] > 1) {
            a[i] = a[i] / 2;
            a.push_back(a[i]);
        } 
        else {
            i++;
        }
    }

    std::sort(a.begin(), a.end());
    for (int i = 0; i < k; i++) {
        std::cout << a[i] << " \n"[i == k - 1];
    }

}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
