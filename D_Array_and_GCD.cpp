#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Step 1: Calculate the GCD of the entire array
    int gcd_all = a[0];
    for (int i = 1; i < n; i++) {
        gcd_all = gcd(gcd_all, a[i]);
    }
    
    // Step 2: If GCD of the entire array is 1, no need to remove any element
    if (gcd_all == 1) {
        return 0;
    }
    
    // Step 3: Try to find the largest subset of elements where the GCD is 1
    // Check the number of elements that can be included in such a subset.
    
    int max_subset_size = 0;
    
    // We are going to try every subset of the array and compute its GCD
    // If its GCD is 1, update the max_subset_size
    for (int i = 0; i < n; i++) {
        int current_gcd = 0;
        for (int j = i; j < n; j++) {
            current_gcd = gcd(current_gcd, a[j]);
            if (current_gcd == 1) {
                max_subset_size = max(max_subset_size, j - i + 1);
                break;  // As soon as we find a subset with GCD 1, we stop extending it
            }
        }
    }

    // The minimum number of elements to remove is the size of the array minus the largest subset
    return n - max_subset_size;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }

    return 0;
}
