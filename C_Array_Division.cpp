#include <bits/stdc++.h>
#define ll long long

bool isPossible(std::vector<ll>& arr, ll mid, int k) {
    ll currentSum = 0;
    int cnt = 1;

    for (ll x : arr) {
        if(currentSum + x > mid){
            cnt++;
            currentSum = x;
            if(cnt > k){
                return false;
            }
        } 
        else{
            currentSum += x;
        }
    }
    return cnt;
}
void solve(){
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> arr(n);
    ll sum = 0, max = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i];
        max = std::max(max, arr[i]);
    }

    ll low = max, high = sum, ans = sum;

    while (low <= high) {
        ll mid = (low + high) / 2;

        if (isPossible(arr, mid, k)) {
            ans = mid;
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }

    std::cout << ans << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
