#include <bits/stdc++.h>
using ll = long long;

ll check(std::string s, bool ok) {
    ll a = 0, b = 0, ra = 5, rb = 5;
    for (int i = 0; i < 10; i++) {
        (i % 2 == 0 ? ra : rb)--;

        if (s[i] == '1' || (s[i] == '?' && ok == (i % 2 == 0))){
            (i % 2 == 0 ? a : b)++;
        }
            
        if (a > b + rb || b > a + ra) {
            return i + 1;
        }
    }
    return 10;
}

void solve() {
    std::string s; 
    std::cin >> s;

    std::cout << std::min(check(s, true), check(s, false)) << "\n";
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
