#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll a, b, c, d;
    std::cin >> a >> b >> c >> d; 
    std::cout << ((a > b - 1 && c > b - 1) || (a > d - 1 && c > d - 1) ? "Gellyfish" : "Flower") << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
