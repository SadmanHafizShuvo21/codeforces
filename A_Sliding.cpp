#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,m,r,c;
    std::cin>>n>>m>>r>>c;
    std::cout<<m*(n-r)+n*m-((r-1)*m+c)-(n-r)<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}