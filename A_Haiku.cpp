#include <bits/stdc++.h>
using ll = long long;

int vowelCheck(std::string &s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u') {
            cnt++;
        }
    }
    return cnt;
}
void solve() {
    std::string s;
    std::vector<int> a(3);
    for (int i = 0; i < 3; i++) {
        std::getline(std::cin, s);
        a[i] = vowelCheck(s);
        s.clear();
    }
    std::cout << ((a[0] == 5 && a[1] == 7 && a[2] == 5) ?"YES" : "NO") << "\n"; 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}