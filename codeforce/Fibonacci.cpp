//22 September 2024
#include<bits/stdc++.h>
using ll = long long;
void fibonacci(int number,int firstNumber,int secondNumber){
    std::cout<<firstNumber<<" "<<secondNumber<<" ";
    for(int i=0;i<number-2;i++){
        int temp=firstNumber+secondNumber;
        std::cout<<temp<<" ";
        std::swap(firstNumber,secondNumber);
        std::swap(secondNumber,temp);
    }
    std::cout<<"\n";
}
void solve(){
    ll n,a,b;
    std::cin>>n>>a>>b;
    fibonacci(n,a,b);
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

