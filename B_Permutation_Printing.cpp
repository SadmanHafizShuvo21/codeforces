#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    ll l=1,r=n;
    for(int i=0;i<n;i++){
        ll x;
        if(i%2==0){
            x=l;
            l++;
        }
        else{
            x=r;
            r--;
        }
        std::cout<<x<<" \n"[i==n-1];
    }  
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
