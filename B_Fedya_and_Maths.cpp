#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    
    ll n = s[s.size() - 1] - '0';
    ll m = (s[s.size() - 2] - '0') ;
    std::cout << ((m * 10 + n)  % 4 ? 0 : 4) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}