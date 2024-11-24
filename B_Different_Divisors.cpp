//03 June 2024
#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a;
    //It continues indefinitely (unless interrupted by a break statement).
    for (ll i = n + 1; ; i++){
        int t = true;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                t = false;
                break;
            }
        }
        if (t){
            a.push_back(i);
            break;
        }
    }
    for (ll i = a.back() + n; ; i++){
        int t = true;
        for (ll j = 2; j * j <= i; j++){
            if (i % j == 0){
                t = false;
                break;
            }
        }
        if (t){
            a.push_back(i);
            break;
        }
    }
    
    std::cout << std::min(1ll * a[0] * a[1], 1ll * a[0] * a[0] * a[0]) << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

