//18 Octo 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string a,b;
    std::cin>>a>>b;
    int count=0;
    while(count<=a.size() && count<=b.size() & a[count]==b[count]){
        count++;
    }
    int ans = a.size()+b.size()-std::max(0,count-1);
    std::cout<<ans<<"\n";
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