#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate GCD of two numbers
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> numerator(n);
    vector<long long> denominator(m);

    // Reading the numerator elements
    for (int i = 0; i < n; ++i) {
        cin >> numerator[i];
    }

    // Reading the denominator elements
    for (int i = 0; i < m; ++i) {
        cin >> denominator[i];
    }

    // Find the total GCD of the numerator set
    long long num_gcd = numerator[0];
    for (int i = 1; i < n; ++i) {
        num_gcd = gcd(num_gcd, numerator[i]);
    }

    // Find the total GCD of the denominator set
    long long den_gcd = denominator[0];
    for (int i = 1; i < m; ++i) {
        den_gcd = gcd(den_gcd, denominator[i]);
    }

    // Find the overall GCD of the numerator and denominator
    long long common_gcd = gcd(num_gcd, den_gcd);

    // Reduce the numerator set by dividing each element by the common GCD
    vector<long long> reduced_numerator;
    for (int i = 0; i < n; ++i) {
        if (numerator[i] % common_gcd == 0) {
            reduced_numerator.push_back(numerator[i] / common_gcd);
        }
    }

    // Reduce the denominator set by dividing each element by the common GCD
    vector<long long> reduced_denominator;
    for (int i = 0; i < m; ++i) {
        if (denominator[i] % common_gcd == 0) {
            reduced_denominator.push_back(denominator[i] / common_gcd);
        }
    }

    // Print the reduced numerator
    for (size_t i = 0; i < reduced_numerator.size(); ++i) {
        cout << reduced_numerator[i] << " ";
    }
    cout << endl;

    // Print the reduced denominator
    for (size_t i = 0; i < reduced_denominator.size(); ++i) {
        cout << reduced_denominator[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();  // Call the solve function for a single test case
    return 0;
}
