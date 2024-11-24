//24 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::sort(arr,arr+n);
    std::vector<int>v;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            v.push_back(arr[i]);
            i++;
        }
    }
    int l=v.size();
    if(l<4){
        std::cout<<"NO"<<"\n";
        return;
    }
    std::cout<<"YES"<<"\n";
    std::cout<<v[0]<<" "<<v[1]<<" "<<v[0]<<" "<<v[l-1]<<" "<<v[l-2]<<" "<<v[1]<<" "<<v[l-2]<<" "<<v[l-1]<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

