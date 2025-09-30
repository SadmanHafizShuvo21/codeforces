#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    std::vector<ll> cnt(26, 0);
    for (auto ch : s) {
        cnt[ch - 'A']++;
    }

    ll odd = 0;
    int oddChar = -1;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2) {
            odd++;
            oddChar = i;
        }
    }

    if (odd > 1) {
        std::cout << "NO SOLUTION" << "\n";
        return;
    }

    std::string half = "", mid = "";
    for (int i = 0; i < 26; i++) {
        half.append(cnt[i] / 2, char('A' + i));
    }
    if (oddChar != -1) {
        mid = std::string(1, char('A' + oddChar));
    }

    std::string str;
    str = half + mid;
    std::reverse(half.begin(), half.end());
    std::cout << str + half << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
