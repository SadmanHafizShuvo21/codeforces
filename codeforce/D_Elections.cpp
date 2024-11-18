//08 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n, c;
    std::cin >> n >> c;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    a[0] += c;
    ll mx = std::max_element(a.begin(), a.end()) - a.begin();
    // std::cout<<mx<<"\n";
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        ll ans;
        if (i == mx) {
            ans = 0;
        } 
        else if (i > mx) {
            ans = i;
        } 
        else {
            ans = i + (sum < a[mx]);
        }
        std::cout << ans << " \n"[i == n - 1];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


