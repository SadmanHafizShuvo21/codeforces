#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    
    ll cnt = 0;
    while (true) {
        if (n >= m) {
            cnt += n - m ;
            break;
        }

        if (m % 2 == 0) {
            m /= 2;
        }
        else{
            m++;
        }
        cnt++;
    }

    std::cout << cnt << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
