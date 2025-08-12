#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    
    ll sum = 0, cnt = 0, cnt1 = 0;
    for (int i = 0; i < n ; i++) {
        ll a;
        std::cin >> a;
        sum += a;
         
        if (a == 0) {
            cnt++;
        }
        else {
            cnt1++;
        }
    }

    if (cnt == 0) {
        std::cout << -1 << "\n";
        return;
    }
    
    ll ans = cnt1 / 9;
    if (ans == 0) {
        std::cout << 0 << '\n';
        return;
    }

    ans *= 9;
    std::string s(ans, '5'), s1(cnt, '0');
    std::cout << s + s1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
