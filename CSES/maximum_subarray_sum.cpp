#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll a,b;
    cin >> a >> b;
    vector<ll> nums(n);
    vector<ll> partial_sum;
    ll prev_sum = 0;
    for(ll i = 0; i < n ;i++){
        cin >> nums[i];
        prev_sum += nums[i];
        partial_sum.push_back(prev_sum);
        cout << prev_sum << " ";
    }
    cout << "\n";
    ll max = -100000000000;
    int num  = 0;
    for(int i = 0; i < n;i++){
        if(i >= b){
            if(a == b){
                num = partial_sum[i] - partial_sum[i-a];
                if(i == b){
                    if(partial_sum[i] > num){
                        num = partial_sum[i];
                    }
                }
                if(num > max){
                    max = num;
                }
            }
            else{
                num = partial_sum[i] - *min_element(partial_sum.begin() + i - b,partial_sum.begin() + i - a);
                if(i == b){
                    if(partial_sum[i] > num){
                        num = partial_sum[i];
                    }
                }
                if(num > max){
                    max = num;
                }
            }
        }
        else if(i >= a){
            num = partial_sum[i] - *min_element(partial_sum.begin(),partial_sum.begin() + i - a );
            if(partial_sum[i] > num){
                num = partial_sum[i];
            }
            if(num > max){
                max = num;
            }
        }
    }
    cout << max << "\n";
}