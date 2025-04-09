#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int q;
    std::cin >> q;
    std::vector<int> a;
    std::string s;
    bool ok = false;
    int st = -1, last = -1;

    while (q--) {
        int x;
        std::cin >> x;
        if (a.empty()) {
            a.push_back(x);
            st = last = x;
            s += '1';
        } 
        else if (!ok) {
            if (x >= last) {
                a.push_back(x);
                last = x;
                s += '1';
            } 
            else if (x <= st) {
                a.push_back(x);
                last = x;
                ok = true;
                s += '1';
            } 
            else {
                s += '0';
            }
        } 
        else {
            if (x >= last && x <= st) {
                a.push_back(x);
                last = x;
                s += '1';
            } 
            else {
                s += '0';
            }
        }
    }

    std::cout << s << "\n";
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
