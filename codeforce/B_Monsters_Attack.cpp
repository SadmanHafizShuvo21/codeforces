//29 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n>>k;
    std::vector<int> a(n), x(n);
    for(auto& it : a){
        std::cin >> it;
    }
    for(auto& it : x){
        std::cin >> it;
    }
    std::vector<long long> s(n + 1);
    for(int i = 0; i < n; ++i){
        s[abs(x[i])] += a[i];
    }
    bool flag = true;
    ll lft = 0;
    for(int i = 1; i <= n; i++){
      lft += k - s[i];
      flag &= (lft >= 0);
    }
    std::cout << (flag ? "YES" : "NO") << '\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}

