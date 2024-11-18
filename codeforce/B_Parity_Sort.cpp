//18 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        b[i]=a[i];
    }
    std::sort(b.begin(),b.end());
    bool ok=true;
    for(int i=0;i<n;i++){
        if(a[i]%2!=b[i]%2){
            ok=false;
            break;
        }
    }
    if(ok)
    std::cout<<"YES"<<"\n";
    else
    std::cout<<"NO"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}


