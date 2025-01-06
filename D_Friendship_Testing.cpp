#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n,k;
    std::cin >> n >> k;
    
    std::set<int> A;
    int num;

    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        A.insert(num);
    }
    ll sum = (long long)k * (k + 1) / 2;
    ll sumb = 0;
    for (int x : A) {
        if (x >= 1 && x <= k) {
            sumb += x;
        }
    }
    std::cout << sum - sumb << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}