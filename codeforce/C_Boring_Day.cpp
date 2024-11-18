//30 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n, l, r;
    std::cin >> n >> l >> r;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int ans = 0, cur = 0, L = 0, R = 0;


    while (L < n) {
        while (R < n && cur < l) {
            cur += a[R];
            R++;
        }
        if (l <= cur && cur <= r) {
            ans++;
            L = R;
            cur = 0;
        } 
        else {
            cur -= a[L];
            L++;
        }
    }
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


