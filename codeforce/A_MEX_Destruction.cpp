// 13 Dec 2024
#include<bits/stdc++.h>

void solve(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    int start=0,end=n-1;
    while(start<=n){
        if(a[start]==0){
            start++;
            if(start==n){
                std::cout<<0<<"\n";
                return;
            }
        }
        else{
            break;
        }
        
    }
    while(0<end){
        if(a[end]==0){
            end--;
        }
        else{
            break;
        }
    }
    // std::cout<<start<<" "<<end<<"\n";
    int count=0;
    for(int i=start;i<end;i++){
        if(a[i]==0){
            count++;
        }
    }
    // std::cout<<"count "<<count<<"\n";
    if(count==0){
        std::cout<<1<<'\n';
    }
    else{
        std::cout<<2<<"\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}