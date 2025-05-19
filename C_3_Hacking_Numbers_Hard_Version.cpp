#include <bits/stdc++.h>
using ll = long long;

void flush() {
    std::cout.flush();
}

ll mul() {
    std::cout << "mul " << 999999999 << "\n";
    flush();
    ll x;
    std::cin >> x;
    assert(x == 1);
    return x;
}

ll check(ll n) {
    if (n != 81) {
        std::cout << "add " << n - 81 << "\n";
        flush();
        ll x;
        std::cin >> x;
        assert(x == 1);
        return x;
    }
    return 1;
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

    mul();        
    dig();        
    check(n);     
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
