//14 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll x,y,k;
    std::cin>>x>>y>>k;
    // std::cout<<x<<" "<<y<<" "<<k<<"\n";
    while(x>1){
        ll rem=y-(x%y);
        if(rem>=k){
            x+=k;
            k=0;
        }
        else{
            k-=rem;
            x+=rem;
        }
        while(x%y==0){
            x/=y;
        }
        if(k<=0){
            break;
        }
    }
    if(k>0){
        k=k%(y-1);
        x+=k;
        while(x%y==0){
            x/=y;
        }
    }
    std::cout<<x<<"\n";
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


