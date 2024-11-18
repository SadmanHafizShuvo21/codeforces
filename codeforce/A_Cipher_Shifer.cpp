//14 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin >> n; 
    std::string s;
    std::cin>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                std::cout<<s[j];
                j++;
                i=j;
            }
        }
    }
    std::cout<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


