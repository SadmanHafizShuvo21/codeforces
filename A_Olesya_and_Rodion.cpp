#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, t;
    std::cin >> n >> t;
    std::string s = std::string(n, char('0' + t));
    if(n == 1 && t == 10) {
        std::cout << -1 << '\n';
        return;
    }
    if (n >= 2 && t == 10) {
        std::cout << 1;
        std::cout << std::string(n - 1, char('0')) << "\n";
        return;
    }
    std::cout << s << "\n";
}

int sum (int a, int b) {
    int ans = a + b;
    return ans;
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    // int a, b;
    // std::cin >> a >> b;

    // int res = sum (a, b);
    

    // int c, d;
    // std::cin >> c >> d;

    // int res1 = sum (c, d);

    // std::cout << res << '\n';
    // std::cout << res1 << '\n';
}