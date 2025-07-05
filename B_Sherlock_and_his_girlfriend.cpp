#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> colors(n + 1, 0); // colors[1] for price 2, ..., colors[n] for price n+1
    int max_color = 0;
    
    // Greedy coloring
    for (int i = 1; i <= n; ++i) {
        int price_i = i + 1;
        // Find colors used by neighbors
        set<int> used_colors;
        for (int j = 1; j <= n; ++j) {
            if (i == j) continue;
            int price_j = j + 1;
            // Check if i and j are connected (price_i divides price_j and price_i is prime, or vice versa)
            if ((price_i % price_j == 0 && isPrime(price_j)) || (price_j % price_i == 0 && isPrime(price_i))) {
                if (colors[j] != 0) { // If j is already colored
                    used_colors.insert(colors[j]);
                }
            }
        }
        // Assign the smallest color not used by neighbors
        int color = 1;
        while (used_colors.count(color)) {
            ++color;
        }
        colors[i] = color;
        max_color = max(max_color, color);
    }
    
    // Output the result
    cout << max_color << endl;
    for (int i = 1; i <= n; ++i) {
        cout << colors[i];
        if (i < n) cout << " ";
    }
    cout << endl;
    
    return 0;
}