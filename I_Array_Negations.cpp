// //04 July 2024
// #include<bits/stdc++.h>
// using ll = long long;
// void solve(){
//     int n,k;
//     std::cin>>n>>k;
//     std::vector<ll> a(n);
//     for(int i=0;i<n;i++){
//         std::cin>>a[i];
//     }
//     std::sort(a.begin(),a.end());
//     ll sum=0;
//     for(int i=0;i<n;i++){
//         if(i<k){
//             if(a[i]>0){
//                 sum-=a[i];
//             }
//             else{
//                 if(a[i]==0)
//                 sum+=a[i];
//                 else
//                 sum+=(-1*a[i]);
//             }
//         }
//         else{
//             sum+=a[i];
//         }
//     }
//     std::cout<<sum<<"\n";
// }
// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     int tesecase;
//     std::cin>>tesecase;
//     while(tesecase--)
//     solve();
// }
#include <bits/stdc++.h>
using namespace std;

int maximizeSum(int arr[], int n, int k) {
    int sum = 0;
    int i = 0;
    sort(arr, arr + n);

    while (k > 0) {
        if (arr[i] >= 0)
            break;
        else {
            arr[i] = (-1) * arr[i];
            k--;
        }
        i++;
    }

    int minPositive = INT_MAX;
    for (int j = 0; j < n; j++) {
        if (arr[j] >= 0)
            minPositive = min(minPositive, arr[j]);
        sum += arr[j];
    }

    if (minPositive == 0 || k % 2 == 0)
        return sum;
    return (sum - 2 * minPositive);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << maximizeSum(arr, n, k) << endl;
    }
    return 0;
}


