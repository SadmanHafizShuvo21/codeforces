#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::cout<<(n/15)*3 + std::min((n%15+1),3)<< "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}