//25 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s;
    std::cin >> s;
    std::vector<std::tuple<int, int, char>> a;
    int b = 0;
    for (int i = 0; i < s.size(); ++i) {
        a.push_back(std::make_tuple(b, -i, s[i]));
        if (s[i] == '(') {
            b++;
        } 
        else {
            b--;
        }
    }
    std::sort(a.begin(), a.end());

    for (const auto& x : a) {
        std::cout << std::get<2>(x);
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}



