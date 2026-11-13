#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    ll x;
    cin >> n >> x;

    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        ll need = x - a[i].first;
        while (l < r) {
            ll s = a[l].first + a[r].first;
            if (s == need) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                return 0;
            } else if (s < need) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}