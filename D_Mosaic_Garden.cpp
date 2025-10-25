#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    std::string s = "ECUST";
    std::map<std::string, ll> mp;
    
    for (int i = 0; i < 32; i++) {
        std::string t = s;
        for (int j = 0; j < 32; j++) {
            if (i & (1 << j)) {
                t[j] = tolower(t[j]); 
            } 
            else {
                t[j] = toupper(t[j]); 
            }
        }
        mp[t]++;
    }
    
    for (auto x : mp) {
        std::cout << x.first << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}