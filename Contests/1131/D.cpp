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
        int current = 0;
        if(n % 2 == 0){
            for(int i = 0; i < n/2;i++){
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
        }
        else{
            for(int i = 0; i <= n/2;i++){
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
        }
        int current2 = 0;
        int fac2 = 0;
        for(int i = n-1; i >= n/2-1;i--){
            nums2[i] -= fac;
            nums2[i] += fac2;
            if(nums2[i] != nums2[n-1]){
                cost += (nums2[n-1]-nums2[i])*current2;
                op += (nums2[n-1]- nums2[i]);
                fac2 += (nums2[n-1] - nums2[i]);
                current2 += 1;
            }
            else{
                current2 += 1;
            }
            
        }
        cout << cost << " " << op << "\n";
    }
}