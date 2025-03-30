#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    ll sum=0,odd=0;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        sum+=a[i];
        if(a[i]%2==1){
            odd++;
        }
    }
    ll h = *std::max_element(a.begin(),a.end());
    if(odd == 0 || odd == n){
        std::cout<<h<<"\n";
    }
    else{
        std::cout<<sum-odd+1<<"\n";
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
    return 0;
}
