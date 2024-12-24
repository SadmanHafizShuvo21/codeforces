//23 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,a,b,c;
    std::cin>>n>>a>>b>>c;
    ll cycle_sum = a + b + c; 
    ll full_cycles = n / cycle_sum; 
    ll remaining = n % cycle_sum; 

    ll total_days = full_cycles * 3;
    if (remaining > 0) {
        total_days++;
        remaining -= a;
    }
    if (remaining > 0) {
        total_days++;
        remaining -= b;
    }
    if (remaining > 0) {
        total_days++;
        remaining -= c;
    }

    std::cout << total_days << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

