#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    std::string res;
    int lowerToRemove = 0, upperToRemove = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        char ch = s[i];
        if (ch == 'b') {
            lowerToRemove++;
        } 
        else if (ch == 'B') {
            upperToRemove++;
        } 
        else if (std::islower(ch)) {
            if (lowerToRemove > 0) {
                lowerToRemove--;
            } 
            else {
                res += ch;
            }
        } 
        else if (std::isupper(ch)) {
            if (upperToRemove > 0) {
                upperToRemove--;
            } 
            else {
                res += ch;
            }
        }
    }

    std::reverse(res.begin(), res.end());
    std::cout << res << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
