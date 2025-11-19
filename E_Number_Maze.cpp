#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n, j, k;
    std::cin >> n >> j >> k;
    std::string s = std::to_string(n);
    std::vector<std::string> prem;
    do {
        prem.push_back(s);
    }
    while(std::next_permutation(s.begin(), s.end()));

    std::string a = prem[j - 1], b = prem[k - 1];

    ll cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        cnt += (a[i] == b[i]);
    }

    std::cout << cnt << "A" << a.size() - cnt << "B" << "\n";
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