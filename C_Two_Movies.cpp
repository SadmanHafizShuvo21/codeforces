//01 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin >> n;
    
    int A = 0, B = 0, C = 0;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            A += a[i];
        } else if (a[i] < b[i]) {
            B += b[i];
        } else if (a[i] == 1) {
            C++;
        } else if (a[i] == -1) {
            C++;
            A--;
            B--;
        }
    }
    
    int ans = std::min({A + C, B + C, (A + B + C) >> 1});
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}







