#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;

void solve() {
    std::string s; 
    std::cin >> s;

    std::map<char, ll> mp;
    ll n = s.size();
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    ll cnt = 0;
    for (auto x : mp) {
        if (x.second % 2 == 1) {
            cnt++;
        }
    }
    if (cnt == 1 && n % 2 != 0) {
        std::cout << "yes" << '\n';
    }
    else if (cnt == 0) {
        std::cout << "yes" << "\n";
    }
    else {
        std::cout << "no" << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}