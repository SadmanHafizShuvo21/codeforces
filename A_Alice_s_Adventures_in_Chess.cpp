#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n,a,b;
    std::cin>>n>>a>>b;
    std::string s;
    std::cin>>s;
    int x=0,y=0;
    for (int i = 0; i < 100; ++i) {
        for (auto c : s) {
            if (c == 'N') {
                y += 1;
            } 
            else if (c == 'E') {
                x += 1;
            } 
            else if (c == 'S') {
                y -= 1;
            } 
            else{
                x -= 1;
            }
            if (x == a && y == b) {
                std::cout << "YES" <<"\n";
                return;
            }
        }
    }
    
    std::cout<<"NO"<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
