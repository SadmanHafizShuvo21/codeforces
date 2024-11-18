//17 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>bits;
    for (int i = 0; i < 62; i++) {
      if (n & (1LL << i)) {
        bits.push_back(i);
      }
    }
    int size=bits.size();
    if (size == 1) {
        std::cout << 1 << "\n";
        std::cout << n << "\n";
    } 
    else {
        std::cout << size + 1 << "\n";
        for (int i = size; i >= 0; i--) {
            if (n >> i & 1) {
                std::cout << (n ^ (1LL << i)) << " ";
            }
        }
        std::cout << n << "\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}


