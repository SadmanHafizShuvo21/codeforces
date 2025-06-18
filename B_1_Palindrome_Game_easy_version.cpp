#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    ll cnt = std::count(s.begin(), s.end(), '0');

    if (cnt == 0) {
        std::cout << "DRAW" << "\n";
    }
    else if (cnt % 2 == 1 && cnt != 1) {
        std::cout << "ALICE" << "\n";
    }
    else {
        std::cout << "BOB" << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t; std::cin >> t;
    while (t--) {
        solve();
    }
}