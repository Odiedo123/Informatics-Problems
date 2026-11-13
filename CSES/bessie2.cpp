#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n;
    ll k;
    scanf("%d %lld", &n, &k);

    vector<ll> a(n);
    for (auto &v : a) scanf("%lld", &v);
    sort(a.begin(), a.end());

    vector<int> end(n);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (j < i) j = i;
        while (j < n && a[j] - a[i] <= k) j++;
        end[i] = j;
    }

    vector<int> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
        suf[i] = max(suf[i + 1], end[i] - i);

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, (end[i] - i) + suf[end[i]]);

    printf("%d\n", ans);
    return 0;
}