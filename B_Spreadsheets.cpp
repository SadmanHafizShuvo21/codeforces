#include <bits/stdc++.h>
using ll = long long;

bool isRxCy(const std::string &s) {
    if (s[0] != 'R') {
        return false;
    }
    int i = 1;
    while (i < s.size() && isdigit(s[i])) {
        i++;
    }
    if (i < s.size() && s[i] == 'C') {
        return true;
    }
    return false;
}

std::string colToLet(int col) {
    std::string res;
    while (col > 0) {
        col--;
        res += char('A' + (col % 26));
        col /= 26;
    }
    std::reverse(res.begin(), res.end());
    return res;
}

int letToCol(const std::string& s) {
    int res = 0;
    for (char c : s) {
        res = res * 26 + (c - 'A' + 1);
    }
    return res;
}

void solve() {
    std::string s;
    std::cin >> s;
    if (isRxCy(s)) {
        int i = 1;
        while (isdigit(s[i])) {
            i++;
        }
        int row = std::stoi(s.substr(1, i - 1));
        int col = std::stoi(s.substr(i + 1));
        std::cout << colToLet(col) << row << "\n";
    } 
    else {
        int i = 0;
        while (isalpha(s[i])) {
            i++;
        }
        int col = letToCol(s.substr(0, i));
        std::cout << "R" << s.substr(i) << "C" << col << "\n";
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
}
