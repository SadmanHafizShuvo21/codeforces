//25 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int a , b , c , d;
    std::cin >> a >> b >> c >> d;
    int sum = 5 * ( 5 + 1) / 2;
    int ans = sum - a - b - c - d;
    std::cout<< ans <<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

