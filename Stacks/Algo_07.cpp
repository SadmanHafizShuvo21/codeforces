//Algo 6.7
#include <bits/stdc++.h>
using namespace std;
//Using for loop
void Factorial(int fact,int n) {
    if(n==0 || n==1){
        std::cout<<fact<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    std::cout<<fact<<"\n";
}
//Using recursion
int factorial(int fact, int n){
    if(n==0 || n==1){
        return fact;
    }
    fact*=n;
    return factorial(fact,n-1);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t,fact=1;
    std::cin>>t;
    Factorial(fact,t);
    std::cout<<factorial(fact,t)<<"\n";
    return 0;
}