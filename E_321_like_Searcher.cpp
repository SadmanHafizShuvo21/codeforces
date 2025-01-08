//07 Jan 2025
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::queue<long long> q;
    for(int i=1;i<10;i++){
        q.push(i);
    }
    ll cnt=0,ans=0;
    while (!q.empty()) {
        ll num = q.front();
        q.pop();
        cnt++;
        if (cnt == n) {
            ans = num;
            break;
        }
        int last_digit = num % 10;
        for (int i = 0; i < last_digit; i++) {
            q.push(num * 10 + i);
        }
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}

