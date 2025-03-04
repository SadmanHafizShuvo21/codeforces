#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll l, r;
    std::cin>>l>>r;
    ll cur=l,dif=1,len=1;
    while(cur+dif<=r){
        cur+=dif;
        len++;
        dif++;
    }

    std::cout << len << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
