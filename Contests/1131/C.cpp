#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>nums(n);
        ll sum = 0;
        ll ones = 0;
        for(int i = 0; i < n;i++){
            cin >> nums[i];
            sum += nums[i];
            if(nums[i] == 1){
                ones += 1;
            }
        }
        sum -= 1;
        if(ones < n){
            if(ones == n-1){
                if(nums[0] > 1 ){
                    cout << nums[0] << "\n";
                }
                else if(nums[n-1] > 1){
                    cout << nums[n-1] << "\n";
                }
                else{
                    cout << sum << "\n";
                }
            }
            else if((ones == n-2) && (nums[0] > 1) && (nums[n-1] > 1)){
                cout << nums[0] + nums[n-1] -1 << "\n";
            }
            else{
                cout << sum << "\n";
            }
        }
        else{
            cout << -1 << "\n";
        }

    }
}