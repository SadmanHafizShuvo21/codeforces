#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::vector< ll > a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    } 

    std::vector< ll > arr(n);
    arr = a;
    std::sort(arr.begin(), arr.end());

    ll l = 0, r = n - 1;
    while(l < n && a[l] == arr[l]) {
        l++;
    }
    while(r >= 0 && a[r] == arr[r]) {
        r--;
    }

    if (l >= r) {
        std::cout << "yes" << "\n";
        std::cout << 1 << " " << 1;
        return;
    }

    std::reverse(a.begin() + l, a.begin() + r + 1);

    if(a == arr) {
        std::cout << "yes" << "\n";
        std::cout << l + 1 << " " << r + 1;
        return;
    }
    std::cout << "no" << "\n"; 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
