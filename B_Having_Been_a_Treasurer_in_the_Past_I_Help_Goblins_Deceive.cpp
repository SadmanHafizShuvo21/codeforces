#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin>>n>>s;
    ll a = std::count(s.begin(),s.end(),'-');
    ll b = n-a;
    // std::cout<<a<<" "<<b<<"\n";
    std::cout<<(a/2)*(a-a/2)*b<<"\n";
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