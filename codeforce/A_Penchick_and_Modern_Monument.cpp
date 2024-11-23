#include<bits/stdc++.h>

void solve(){
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    std::map<int,int>mp;
    int maxi=0;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        mp[a[i]]++;
        maxi=std::max(maxi,mp[a[i]]);
    }
    std::cout<<n-maxi<<"\n";
}

void solveAlt(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    if(n==1){
        std::cout<<0<<"\n";
        return;
    }
    int count=1,maxi=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
        }
        else{
            count=1;
        }
        maxi=std::max(maxi,count);
    }
    std::cout<<n-maxi<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solveAlt();
    }
}