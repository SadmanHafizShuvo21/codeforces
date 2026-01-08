#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::vector<std::string> s(8);
    for (int i = 0; i < 8; i++) {
        std::cin >> s[i];
    }
    
    std::string str;
    for(int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(s[i][j] >= 'a' && s[i][j] <= 'z') {
                str.push_back(s[i][j]);
            }
        }
    }
    std::cout << str << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}