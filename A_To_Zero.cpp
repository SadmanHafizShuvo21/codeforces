#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n>>k; 
    n--;
    k--;
    std::cout<<(n+k-1)/k<<"\n";
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