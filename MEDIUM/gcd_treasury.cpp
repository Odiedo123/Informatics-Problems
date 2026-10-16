#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Find the prime factors of x
        vector<int> primes;

        int temp = x;

        for (int p = 2; p * p <= temp; p++) {
            if (temp % p == 0) {
                primes.push_back(p);

                while (temp % p == 0) {
                    temp /= p;
                }
            }
        }

        if (temp > 1) {
            primes.push_back(temp);
        }

        // Try each prime factor
        long long answer = 0;

        for (int p : primes) {

            long long sum = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] % p == 0) {
                    sum += a[i];
                }
            }

            answer = max(answer, sum);
        }

        cout << answer << '\n';
    }

    return 0;
}