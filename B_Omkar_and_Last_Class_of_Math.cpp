//21 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    int p=0;
    for(int i=2;i<100000;i++){
        if(n%i==0){
            p=i;
            break;
        }
    }
    if(p==0){
        p=n;
    }
    std::cout<<n/p<<" "<<n-(n/p)<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


