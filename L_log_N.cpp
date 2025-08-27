#include <bits/stdc++.h>
using ll = long long;
const ll MAX_NUM = 1e18;
std::vector<ll> arr;

ll binarySearch(std::vector<ll> &arr, ll x) {
    ll left = 0, right = arr.size() - 1;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void solve() { 
    ll n;
    std::cin >> n;
    std::vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    ll x;
    std::cin >> x;
    std::cout << (binarySearch(arr, x)) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
