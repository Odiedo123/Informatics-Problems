#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> nums(n);
        ll target = 0;
        for(int i = 0; i < n;i++){
            cin >> nums[i];
        }
        int op = 0;
        int cost = 0;
        vector<ll> nums2 = nums;
        sort(nums2.begin(),nums2.end());
        int fac = 0;
        int index = n-1;
        int current = 1;
        for(int i = 1; i < n/2;i++){
            nums2[i] -= fac;
            if(nums2[0] != nums2[i]){
                cost += (nums2[i]- nums2[0])*current;
                op += (nums2[i]- nums2[0]);
                fac += (nums2[i] - nums2[0]);
                current += 1;
            }
            else{
                current += 1;
            }
        }
        int current2 = 0;
        int fac2 = 0;
        for(int i = n-1; i >= n/2;i--){
            if(nums2[i] != nums2[n-1]){
                cost += (nums2[i]- nums2[n-1])*current;
                op += (nums2[i]- nums2[n-1]);
                fac2 += (nums2[i] - nums2[n-1]);
                current += 1;
                current2 += 1;
            }
            else{
                current2 += 1;
            }
            
        }
        if(index <= n - index){
            nums2[n-1] = nums2[n-1] - fac;
            cost += (nums2[n-1]- nums2[0])*index;
            op += (nums2[n-1]- nums2[0]);
        }
        else{
            nums2[n-1] = nums2[n-1] - fac;
            cost += (nums2[n-1]- nums2[0])*(n-index);
            op += (nums2[n-1]- nums2[0]);
        }
        cout << cost << " " << op << "\n";
    }
}