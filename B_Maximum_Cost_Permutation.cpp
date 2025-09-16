#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n; 
    std::cin >> n;
    std::vector<int> a(n + 1), pos(n + 1, -1);

    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
        if (a[i] != 0) {
            pos[a[i]] = i;
        }
    }

    ll z = std::count(a.begin() + 1, a.end(), 0);
    // std::cout << z << "\n";
    
    ll l = 0, r = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] > 0 && a[i] != i) { 
            l = i; 
            break; 
        }
        if (a[i] == 0) {
            if (pos[i] != -1 || z >= 2) { 
                l = i; 
                break; 
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        if (a[i] > 0 && a[i] != i) { 
            r = i; 
            break; 
        }
        if (a[i] == 0) {
            if (pos[i] != -1 || z >= 2) { 
                r = i; 
                break; 
            }
        }
    }

    std::cout << ((l == 0 && r == 0) ? 0 : r - l + 1) << "\n";
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
