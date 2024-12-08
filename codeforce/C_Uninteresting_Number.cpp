//09 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s;
    std::cin >> s;

    std::vector<int> digits;

    for (char c : s) {
        digits.push_back(c - '0');
    }

    int sm = 0;
    int twos = 0, threes = 0;

    for (int x : digits) {
        sm += x;
        if (x == 2){
            twos++;
        } 
        if (x == 3){
            threes++;
        } 
    }

    for (int i = 0; i <= std::min(10, twos); i++) {
        for (int j = 0; j <= std::min(10, threes); j++) {
            if ((sm + i * 2 + j * 6) % 9 == 0) {
                std::cout<<"YES"<<"\n";
                return;
            }
        }
    }
    std::cout<<"NO"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

