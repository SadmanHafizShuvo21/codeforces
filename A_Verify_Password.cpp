//30 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::string s;
    std::cin>>n>>s;
    if(std::is_sorted(s.begin(),s.end())){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

