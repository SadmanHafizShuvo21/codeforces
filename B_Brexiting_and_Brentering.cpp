#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, res;
    std::cin >> s;
    
    res = s;
    std::reverse(res.begin(), res.end());
    bool ok = false;
    std::string ans, add = "ntry";
    for (int i = 0; i < res.size(); i++) {
        if ((res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' || res[i] == 'u') && ok == false) {
            ok = true;
        }
        if (ok == true) {
            ans.push_back(res[i]);
        }
    }

    std::reverse(ans.begin(), ans.end());
    std::cout << ans + add << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
