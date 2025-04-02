#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll d,sumTime;
    std::cin>>d>>sumTime;
    std::vector<ll>a(d),b(d);
    ll minSum=0,maxSum=0;
    for(int i=0;i<d;i++){
        std::cin>>a[i]>>b[i];
        minSum+=a[i];
        maxSum+=b[i];
    }
    if(sumTime<minSum || sumTime>maxSum){
        std::cout<<"NO"<<"\n";
        return;
    }
    std::cout<<"YES"<<"\n"; 
    std::vector<ll>schedule=a;
    ll rem=maxSum-minSum;

    for(int i=0;i<d && rem>0;i++){
        ll add=std::min((b[i]-a[i]),rem);
        schedule[i]+=add;
        rem-=add;
    }
    for(int i=0;i<schedule.size();i++){
        std::cout<<schedule[i]<<" \n"[i==schedule.size()-1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
