#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (auto &v : a) cin >> v;
    sort(a.begin(), a.end());

    int mid = n / 2;
    ll lo = a[mid], hi = a[mid] + k;

    while (lo < hi) {
        ll m = lo + (hi - lo + 1) / 2;
        ll cost = 0;
        for (int i = mid; i < n; i++) {
            if (a[i] >= m) break;
            cost += m - a[i];
            if (cost > k) break;
        }
        if (cost <= k) lo = m;
        else hi = m - 1;
    }

    cout << lo << "\n";
    return 0;
}