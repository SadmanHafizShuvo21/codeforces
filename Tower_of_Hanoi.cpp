#include<bits/stdc++.h>
using ll = long long;

void Tower(int disks, int Beg, int Aux, int End){
    if(disks==1){
        std::cout<<Beg<<" "<<End<<"\n";
        return;
    }
    Tower(disks-1,Beg,End,Aux);
    std::cout<<Beg<<" "<<End<<"\n";
    Tower(disks-1,Aux,Beg,End);
}

int main(){
    int n;
    std::cin>>n;
    // cout<<"The number of Disks: "<<n<<"\n";
    std::cout<<std::pow(2,n)-1<<"\n";
    Tower(n,1,2,3);
}
