//09 Jun 2024
#include<bits/stdc++.h>
using ll = long long;

int calculateSumOfDifferences(std::vector<int> &A) {
    int sum = 0;
    for (int i = 0; i < A.size() - 1; ++i) {
        sum += abs(A[i] - A[i + 1]);
    }
    return sum;
}

void solve(){
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    int currentSum = calculateSumOfDifferences(A);
    int maxSum = currentSum;

    for (int i = 0; i < N; ++i) {
        int original = A[i];

        A[i] = 1;
        maxSum = std::max(maxSum, calculateSumOfDifferences(A));
        A[i] = K;
        maxSum = std::max(maxSum, calculateSumOfDifferences(A));

        A[i] = original;
    }
    std::cout<<maxSum<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

