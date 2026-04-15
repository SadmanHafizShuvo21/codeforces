// 15 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::vector<std::pair<ll, std::string>> morse = {{0, "-----"}, {1, ".----"}, {2, "..---"}, {3, "...--"}, {4, "....-"}, {5, "....."}, {6, "-...."}, {7, "--..."}, {8, "---.."}, {9, "----."}};

    std::string str;
    std::cin >> str;

    ll dot = 0, dash = 0;
    for (int i = 0; i < str.size(); i++) {
        ll digit = str[i] - '0';
        for (auto &[a, b] : morse) {
            if (a == digit) {
                dot += std::count(b.begin(), b.end(), '.');
                dash += std::count(b.begin(), b.end(), '-');
                break;
            }
        }
    }

    std::cout << dot << " " << dash << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}