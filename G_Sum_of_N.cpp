#include <iostream>
using namespace std;

unsigned long long p_N(unsigned long long N) {
    return (N + 1) / 2;
}

unsigned long long calculate_f_N(unsigned long long N) {
    unsigned long long f_N = p_N(N);
    unsigned long long power_of_2 = 2;

    while (power_of_2 <= N) {
        f_N += p_N(N / power_of_2);
        power_of_2 *= 2;
    }

    return f_N;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        unsigned long long K;
        cin >> K;

        unsigned long long answer = calculate_f_N(K);
        cout << answer << endl;
    }

    return 0;
}
