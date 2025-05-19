#include <bits/stdc++.h>
using ll = long long;

void flush() {
    std::cout.flush();
}

ll mul(ll n) {
    std::cout << "mul " << n << "\n";
    flush();
    ll x;
    std::cin >> x;
    assert(x == 1);
    return x;
}

ll add(ll n) {
    std::cout << "add " << n << "\n";
    flush();
    ll x;
    std::cin >> x;
    assert(x == 1);
    return x;
}

ll dig() {
    std::cout << "digit" << "\n";
    flush();
    ll x;
    std::cin >> x;
    assert(x == 1);
    return x;
}

ll final() {
    std::cout << "!" << "\n";
    flush();
    ll x;
    std::cin >> x;
    assert(x == 1);
    return x;
}

void solve() {
    ll n;
    std::cin >> n;

    mul(9);            
    dig();              
    dig();              
    add(n - 9);         
    final();            
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
