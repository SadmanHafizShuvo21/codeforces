// #include<bits/stdc++.h>
// using ll = long long int ;
 
// void solve(){
//     ll n,ans=0;
//     std::cin >> n ;
//     for(ll i=1;i<=std::sqrt(n);i++){
//         if(n%i==0){
//             ans++;
//             if(n/i!=i){
//                 ans++;
//             }
//         }
//     }
//     std::cout<<ans<<"\n";
// }
// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     int t;
//     std::cin>>t;
//     while(t--){
//         solve();
//     }
// }
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
vector<int> spf(MAX);

void sieve() {
    for (int i = 1; i < MAX; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i < MAX; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX; j += i) {
                if (spf[j] == j) { 
                    spf[j] = i;
                }
            }
        }
    }
}


int countDivisors(int x) {
    int divisors = 1;
    while (x > 1) {
        int p = spf[x]; 
        int count = 0;
        while (x % p == 0) { 
            x /= p;
            count++;
        }
        divisors *= (count + 1); 
    }
    return divisors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); 
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << countDivisors(x) << "\n";
    }
}