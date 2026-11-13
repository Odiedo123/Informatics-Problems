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
        for(ll i = 0; i< n;i++){
            cin >> nums[i];
        }
        sort(nums.begin(),nums.end());
        ll side1 = 0;
        ll side2 = 0;
        for(int i = n-1; i >= 0;i--){
            if(side1 < side2){
                side1 += pow(2,nums[i]);
            }
            else{
                side2 += pow(2,nums[i]);
            }
        }
        cout << (side1)*(side2) << "\n";
    }
}