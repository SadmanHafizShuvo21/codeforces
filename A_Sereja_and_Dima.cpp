#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll sum1 = 0, sum2 = 0, l = 0, r = n - 1;
    while (l <= r) {
        ll tem = 0;
        if (a[l] >= a[r]) {
            tem = a[l];
            l++;
        }
        else {
            tem = a[r];
            r--;
        }
        (l + r) % 2 == 1 ? (sum1 += tem) : (sum2 += tem);
    }
    if (n % 2 == 0) {
        std::swap(sum1, sum2);
    }
    std::cout << sum1 << " " << sum2 ;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}