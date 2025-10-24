#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

ll check(std::vector<ll> &arr) {
    ll ans = 0, n = arr.size();
    for (int i = 0; i < n; i++) {
        ans += std::abs(arr[n / 2] - arr[i]);
        ans -= std::abs(n / 2 - i);
    }
    return ans;
}

void solve() {
    ll n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::vector<ll> a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            a.push_back(i);
        }
        else {
            b.push_back(i);
        }
    }

    std::cout << std::min(check(a), check(b)) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
