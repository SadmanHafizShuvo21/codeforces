#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::string> s(11);
    s[0] = "CODEFORCES", s[1] ="EYE", s[2] = "TESTING", s[3] = "SYSTEM", s[4] = "APRIL", s[5] = "FOOLS", s[6] = "YOU", s[7] = "READ", s[8] = "POORLY", s[9] = "GET", s[10] = "EYEGLASSES";
    std::cout << s[n - 1] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}