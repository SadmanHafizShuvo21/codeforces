//29 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,q;
    std::cin>>n>>q;
    ll sum=0,even=0,odd=0;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        sum+=x;
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    while(q--){
        ll type,val;
        std::cin>>type>>val;
        if(type==0 && val%2==0){
            sum+=(val*even);
        }
        else if(type==0 && val%2!=0){
            sum+=(val*even);
            odd+=even;
            even=0;
        }
        else if(type==1 && val%2==0){
            sum+=(val*odd);
        }
        else if(type==1 && val%2!=0){
            sum+=(val*odd);
            even+=odd;
            odd=0;
        }
        
        std::cout<<sum<<'\n';
    }
    
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

