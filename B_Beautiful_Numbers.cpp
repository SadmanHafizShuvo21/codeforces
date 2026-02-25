// 25 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll digit_sum(ll n) {
    ll sum = 0;
    while(n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void solve() {
    ll n;
    std::cin >> n;
    
    ll sum = digit_sum(n);
    std::string s = std::to_string(n);
    if (sum <= 9) {
        std::cout << 0 << "\n";
        return;
    }

    std::vector<std::pair<int,int>> pr;
    for (int i = 0; i < s.size(); i++) {
        pr.push_back({s[i]-'0', i});
    }
    std::sort(pr.rbegin(), pr.rend());

    ll ans = 0;
    for (auto [d,pos] : pr) {
        if (sum <= 9) {
            break;
        }
        if (pos == 0) {
            sum -= (d - 1);
        } 
        else {
            sum -= d;
        }
        ans++;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
