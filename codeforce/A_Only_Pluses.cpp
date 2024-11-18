//11 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int arr[3];
    for(int i=0;i<3;i++){
        std::cin>>arr[i];
    }
    
    for(int i=0;i<5;i++){
        std::sort(arr,arr+3);
        arr[0]++;
    }
    std::cout<<arr[0]*arr[1]*arr[2] <<"\n";
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


