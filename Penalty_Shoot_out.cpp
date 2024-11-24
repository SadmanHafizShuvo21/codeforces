//11 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int x,y;
    std::cin>>x>>y;
    int dif=std::abs(x-y);
    // std::cout<<dif<<"\n";
    if((x+2)==(y)){
        std::cout<<"YES"<<"\n";
    }
    else if((x+2)==(y+1)){
        std::cout<<"YES"<<"\n";
    }
    else if((x+1)==(y)){
        std::cout<<"YES"<<"\n";
    }
    else if((x+1)==(y+1)){
        std::cout<<"YES"<<"\n";
    }
    else if((x)==(y)){
        std::cout<<"YES"<<"\n";
    }
    else if((x)==(y+1)){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }    
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


