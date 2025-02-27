#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if(a[i]<a[j]){
                sum++;
            }
        }
    }
    ll ans = sum;
    ll l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        int cur = sum;
        for (int j = i + 1; j < n; j++) {
            if(a[i]>a[j]){
                cur--;
            }
            else if(a[i]<a[j]){
                cur++;
            }
            if (cur < ans) {
                ans = cur;
                l = i;
                r = j;
            }
        }
    }
    std::cout << l + 1 << " " << r + 1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}