#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> nums(n);
    ll half_sum = 0;
    ll index = n/2;
    for(ll i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    for(ll i = index; i < n;i++){
        half_sum += nums[i];
    }
    half_sum += k;
    half_sum = half_sum/(index + 1);
    cout << half_sum << "\n";
    
}