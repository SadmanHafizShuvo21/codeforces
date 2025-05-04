#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    std::vector<std::string> str;
    std::stringstream ss(s);
    std::string seg;

    while (std::getline(ss, seg, '/')) {
        if (!seg.empty()) {
            str.push_back(seg);
        }
    }

    if (str.empty()) {
        std::cout << "/" << '\n';
        return;
    }

    std::cout<<"/";
    for (int i = 0; i < str.size(); i++) {
        std::cout << str[i] << "/\n"[i + 1 == str.size()];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
