#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    int n, a, b;
    cin >> n >> a >> b;

    vector<ll> p(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ll v;
        cin >> v;
        p[i] = p[i - 1] + v;
    }

    deque<int> dq;
    ll ans = LLONG_MIN;

    for (int j = a; j <= n; j++) {
        int add = j - a;
        while (!dq.empty() && p[dq.back()] >= p[add]) dq.pop_back();
        dq.push_back(add);

        while (dq.front() < j - b) dq.pop_front();

        ans = max(ans, p[j] - p[dq.front()]);
    }

    cout << ans << "\n";
    return 0;
}