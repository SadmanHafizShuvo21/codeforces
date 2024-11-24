//27 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n>>k;
    std::string s(n,'a');
    for(int i=n-2;i>=0;i--){
        if(k<=n-i-1){
            s[i]='b';
            s[n-k]='b';
            break;
        }
        k-=(n-i-1);
    }
    std::cout<<s<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


