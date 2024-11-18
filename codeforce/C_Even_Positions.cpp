//31 July 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    int pre = 0;
    ll ans = 0;
    for (int i = 0; i < n; i += 2){
        if (pre > 0){
            pre--;
        } else {
            pre++;
        }
        ans += pre;
        pre += (s[i + 1] == '(' ? 1 : -1);
        ans += pre;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}
