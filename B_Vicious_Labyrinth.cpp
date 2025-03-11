#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    for(int i=0;i<n-2;i++){
        std::cout<<(k%2?n:n-1)<<' ';
    }
    std::cout<<n<<" "<<n-1<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}