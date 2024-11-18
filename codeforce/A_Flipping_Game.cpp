//25 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    int num,sum=0,count=0,maxi = INT_MIN;
    
    for(int i=0;i<n;i++){
        std::cin>>num;
        if(num==0)
        sum++;
        else{
            sum--;
            count++;
        }
        
        if(sum>maxi)
        maxi=sum;
        if(sum<0)
        sum=0;
    }
    // std::cout<<maxi<<"\n";
    std::cout<<count+maxi<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}