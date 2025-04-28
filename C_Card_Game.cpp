#include <bits/stdc++.h>
using ll = long long;

bool ok(int a, int b, int n) {
    if (a == 1 && b == n) {
        return true;
    }
    if (b == 1 && a == n) {
        return false;
    }
    return a > b;
}

bool beat(std::vector<int>& p, std::vector<int>& o, int n) {
    for (int c : p) {
        bool win = true;
        for (int oc : o) {
            if (!ok(c, oc, n)) {
                win = false;
                break;
            }
        }
        if (win) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    
    std::vector<int> a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            a.push_back(i + 1);
        } else {
            b.push_back(i + 1);
        }
    }
    
    if (beat(a, b, n)) {
        std::cout << "Alice\n";
        return;
    }
    if (beat(b, a, n)) {
        std::cout << "Bob\n";
        return;
    }

    int maxA = *std::max_element(a.begin(), a.end());
    int maxB = *std::max_element(b.begin(), b.end());

    bool bob = false;
    for (int x : b) {
        if (ok(x, maxA, n)) {
            bob = true;
            break;
        }
    }
    
    if (bob) {
        std::cout << "Bob\n";
        return;
    }

    bool alice = false;
    for (int x : a) {
        if (ok(x, maxB, n)) {
            alice = true;
            break;
        }
    }

    if (alice) {
        std::cout << "Alice\n";
        return;
    }

    if (maxA > maxB) {
        std::cout << "Alice\n";
    } 
    else if (maxB > maxA) {
        std::cout << "Bob\n";
    } 
    else {
        if (a.size() > b.size()) {
            std::cout << "Alice\n";
        } 
        else {
            std::cout << "Bob\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
