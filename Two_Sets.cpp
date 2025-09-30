#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;

    ll sum = n * (n + 1) / 2;
    if (sum % 2) {
        std::cout << "NO" << "\n";
        return;
    }

    ll mid = sum / 2;
    std::vector<ll> a, b;
    for (int i = n; i > 0; i--) {
        if (mid >= i) {
            a.push_back(i);
            mid -= i;
        }
        else {
            b.push_back(i);
        }
    }
    
    std::cout << "YES" << "\n";
    std::cout << a.size() << "\n";
    for (int i = 0; i < (int)a.size(); i++) {
        std::cout << a[i] << " \n"[i == (int)a.size() - 1];
    }

    std::cout << b.size() << "\n";
    for (int i = 0; i < (int)b.size(); i++) {
        std::cout << b[i] << " \n"[i == (int)b.size() - 1];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
