#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll a, b;
    std::cin >> a >> b;
    ll dif = abs(a - b);
    if (dif == 0) {
        std::cout << 0 << "\n";
        std::cout << a << "\n";
        return;
    }

    std::vector<ll> jump;
    for(int i = 0; i < 32; i++) {
        if(dif & (1LL << i)) {
            jump.push_back(1LL << i);
        }
    }

    std::sort(jump.rbegin(), jump.rend());
    
    ll cur = a, sign = (a <= b) ? 1 : -1;
    std::vector<ll> path{a};
    for(auto j : jump) {
        cur += sign * j;
        path.push_back(cur);
    }
    std::cout << jump.size() << "\n";
    
    for (int i = 0; i < path.size(); i++) {
        std::cout << path[i] << " \n"[i == path.size() - 1];
    }
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