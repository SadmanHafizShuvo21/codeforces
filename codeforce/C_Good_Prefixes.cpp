//11 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n, s = 0, cnt = 0;
    std::set<ll> st;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
        s += a[i];
        st.insert(2 * a[i]);
        auto it = st.find(s);
        if (it != st.end())
            cnt++;
    }
    std::cout<<cnt<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


