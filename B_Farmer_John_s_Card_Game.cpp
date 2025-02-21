#include <bits/stdc++.h>
using ll = long long ;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::vector<ll>> v(n, std::vector<ll>(m));
    std::vector<ll> p(n, -1);
    bool val = true;
    ll c = 0;
    for (std::vector<ll> &it : v) {
        for (ll &i : it){
            std::cin >> i;
        } 
        ll mini = *std::min_element(it.begin(), it.end());
        if (mini < n){
            p[mini] = c++;
        } 
        else{
            val=false;
        }
        std::sort(it.begin(), it.end());
        ll last = it[0] - n;
        for (ll i : it) {
            if((last+n) != i){
                val=false;
            }
            last = i;
        }
    }
    if(!val){
        std::cout << "-1"<<"\n";
        return;
    }
    for(int i=0;i<p.size();i++){
        std::cout<<p[i]+1<<" \n"[i==n-1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}