#include<bits/stdc++.h>
using ll = unsigned long long;
std::vector<bool> prime(1e5 + 7, true);
std::vector<ll> tpow(31);

ll countDivisor(ll n) {
    ll sq = std::sqrt(n);
    ll cnt = 0;
    for(int i = 1; i <= sq; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
 
    ll ans = 2 * cnt - (sq * sq == n);
    return ans;
}

void sieve(int n) {
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            return mid; 
        } 
        else if (arr[mid] < target) {
            left = mid + 1; 
        } 
        else {
            right = mid - 1; 
        }
    }
    return -1; 
}

void solve() {
    ll n;
    std::cin >> n;

    std::vector<std::string> s(n);
    for(int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    std::sort(s.begin(), s.end());
    std::cout << s[n / 2] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}