// //22 May 2024
// #include<bits/stdc++.h>
// using ll = long long;
// void solve(){
//     ll a,b,k,cnt=1;
//     std::cin>>a>>b>>k;
//     ll ans=a+1;
//     while(ans<=b){
//         ans*=k;
//         cnt++;
//     }
//     std::cout<<cnt<<"\n";
// }
// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     int testcase;
//     std::cin>>testcase;
//     while (testcase--){
//         solve();
//     }
// }
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        long long A, B, K;
        cin >> A >> B >> K; // Input A, B, and K

        int count = 0;
        while (A != B) {
            if (B > A) {
                if (B % K == 0) {
                    B /= K;
                } else {
                    B--;
                }
            } else {
                B *= K;
            }
            count++;
        }

        cout << count << endl;
    }

    return 0;
}

