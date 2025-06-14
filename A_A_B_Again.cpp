//07 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    std::cout << (s[0]-'0') + s[1] - '0' << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}
