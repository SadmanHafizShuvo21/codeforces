#include <bits/stdc++.h>
using ll = long long;
const ll MAX_NUM = 1e18;
std::vector<ll> arr;

ll check(ll n, ll x) {
    std::string s = std::bitset<32>(x).to_string().substr(32 - n, n);
    // std::cout << s << "\n";
    std::reverse(s.begin(), s.end());
    std::bitset<32> reversed(s);
    // std::cout << reversed << "\n";
    return reversed.to_ullong();
}

void solve() { 
    ll n, x;
    std::cin >> n >> x;
    std::cout << (check(n, x)) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
