#include <bits/stdc++.h>
using ll = long long;

std::string generate_password(int a, int b, int c) {
    std::string digits = "0123456789";
    std::string upper = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    std::string lower = "abcdefghijklmnopqrstuvwxyz";

    std::string str;
    int di = 0, ui = 0, li = 0;

    while (a + b + c > 0) {
        if (a > 0 && (str.empty() || str.back() != digits[di])) {
            str += digits[di];
            di = (di + 1) % 10;
            a--;
        }
        if (b > 0 && (str.empty() || str.back() != upper[ui])) {
            str += upper[ui];
            ui = (ui + 1) % 26;
            b--;
        }
        if (c > 0 && (str.empty() || str.back() != lower[li])) {
            str += lower[li];
            li = (li + 1) % 26;
            c--;
        }
    }

    return str;
}

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << generate_password(a, b, c) << "\n";
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
