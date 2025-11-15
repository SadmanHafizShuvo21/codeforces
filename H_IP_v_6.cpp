#include <bits/stdc++.h>
using ll = long long;

std::vector<std::string> split(const std::string &s) {
    std::vector<std::string> v;
    std::stringstream ss(s);
    std::string x;
    while (std::getline(ss, x, ':')) {
        if (!x.empty()) {
            v.push_back(x);
        }
    }
    return v;
}

void solve() {
    std::string s;
    std::cin >> s;

    std::vector<std::string> v;
    int p = s.find("::");

    if (p == -1) {
        std::stringstream ss(s);
        std::string x;
        while (std::getline(ss, x, ':')) {
            v.push_back(x);
        }
    } 
    else {
        std::string l = s.substr(0, p);
        std::string r = s.substr(p + 2);

        std::vector<std::string> vl = split(l);
        std::vector<std::string> vr = split(r);

        for (auto &x : vl) {
            v.push_back(x);
        }

        int m = 8 - (vl.size() + vr.size());
        while (m--) {
            v.push_back("0");
        }

        for (auto &x : vr) {
            v.push_back(x);
        }
    }

    for (int i = 0; i < 8; i++) {
        std::string x = v[i];
        for (auto &c : x) {
            c = std::tolower(c);
        }
        while (x.size() < 4) {
            x = "0" + x;
        }
        std::cout << x << (i == 7 ? "" : ":");
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
