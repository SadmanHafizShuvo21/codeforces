#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    int total_dis = 0;

    int posi = s.find('A'); 

    for (char ch = 'B'; ch <= 'Z'; ++ch) {
        int target_position = s.find(ch); 

        total_dis += abs(target_position - posi);
        posi = target_position;
    }

    std::cout << total_dis << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve(); 

}
