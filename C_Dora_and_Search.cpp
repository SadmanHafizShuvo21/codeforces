#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n),b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll l=0,r=n-1,st=1,end=n;
    while(l<=r){
        if(a[l]==st){
            st++;
            l++;
        }
        else if(a[l]==end){
            l++;
            end--;
        }
        else if(a[r]==st){
            r--;
            st++;
        }
        else if(a[r]==end){
            r--;
            end--;
        }
        else{
            std::cout<< l+1 << " " << r+1 <<"\n";
            return;
        }
    }
    std::cout << -1 << "\n";
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
