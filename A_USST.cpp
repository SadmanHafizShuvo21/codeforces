// 28 May 2024 A. 我是组题人
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> problems; 
    for (int i = 1; i <= n; ++i) {
        int difficulty;
        std::cin >> difficulty;
        problems.push_back({difficulty, i});
    }
    std::sort(problems.begin(), problems.end());
    for (const auto& p : problems) {
        std::cout << p.second << " ";
    }
    std::cout <<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}