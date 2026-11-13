#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> nums(n);
        for(ll i = 0; i < n ;i++){
            cin >> nums[i];
        }
        ll global_max = nums[0];
        ll L = nums[0];
        ll H = nums[0];
        ll place;
        for(ll i = 1; i < n; i++){
            place = max(nums[i]-L,nums[i]+H);
            if(place >= global_max){
                global_max = place;
            }
            L += min(nums[i]+ L,nums[i] - L);
            H += max(nums[i]+ H,nums[i] - H);
        }
        cout << global_max << "\n";

    }
}