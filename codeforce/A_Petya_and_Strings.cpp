//29 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string a,b;
    std::cin>>a>>b;
    std::transform(a.begin(), a.end(), a.begin(), ::tolower);
    std::transform(b.begin(), b.end(), b.begin(), ::tolower);
    for(int i=0;i<a.size();i++){
        if(a[i]>b[i]){
            std::cout<<1<<"\n";
            break;
        }
        else if(a[i]<b[i]){
            std::cout<<-1<<'\n';
            break;
        }
    }
    if(a==b){
        std::cout<<0<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

