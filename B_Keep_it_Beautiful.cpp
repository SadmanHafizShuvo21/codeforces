#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int q;
    std::cin >> q;
    std::vector<int> a;
    std::string res;
    bool wrapped = false;
    int first = -1, last = -1;

    while (q--) {
        int x;
        std::cin >> x;
        if (a.empty()) {
            a.push_back(x);
            first = last = x;
            res += '1';
        } else if (!wrapped) {
            if (x >= last) {
                a.push_back(x);
                last = x;
                res += '1';
            } else if (x <= first) {
                a.push_back(x);
                last = x;
                wrapped = true;
                res += '1';
            } else {
                res += '0';
            }
        } else {
            if (x >= last && x <= first) {
                a.push_back(x);
                last = x;
                res += '1';
            } else {
                res += '0';
            }
        }
    }

    std::cout << res << "\n";
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
