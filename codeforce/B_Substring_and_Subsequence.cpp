//29 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string a,b;
    std::cin>>a>>b;
    int ans=b.size();
    for(int i=0;i<b.size();i++){
        int k=i;
        for(int j=0;j<a.size();j++){
            if(k<b.size() && a[j]==b[k]){
                k++;
            }
        }
        ans=std::min(ans,i+int(b.size())-k);
    }
    std::cout<<ans+a.size()<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


