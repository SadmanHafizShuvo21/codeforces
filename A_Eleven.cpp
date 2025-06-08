#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::string s;

    ll a = 1, b = 1;
    for (int i = 1; i <= n; i++) {
        if(i == a) {
            s+='O';
            a = i + b;
            b = i;
        }
        else {
            s+='o';
        }
    }
    std::cout << s << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}