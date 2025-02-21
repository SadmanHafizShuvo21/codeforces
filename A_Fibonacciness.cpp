#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll a,b,c,d;
    std::cin>>a>>b>>c>>d;
    std::set<ll>s;
    s.insert(d-c);
    s.insert(c-b);
    s.insert(a+b);
    std::cout<<4-s.size()<<"\n";
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
