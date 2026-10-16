#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        vector<int> nums1 = nums;
        vector<int> nums2 = nums;
        int sum1 = nums1[0];
        int sum2 = nums2[0];;
        for(int i = 1 ; i<n ;i++){
            nums1[i]= max(nums1[i] + sum1, -sum1 + nums1[i]) - sum1;
            sum1 = max(nums1[i] + sum1, -sum1 + nums1[i]);
        }
        for(int i = 0 ; i < n; i++){
            if(i == n-1){
                nums2[i]= max(nums2[i] + sum2, -sum2 + nums2[i]) - sum1;
                sum2 = max(nums2[i] + sum2, -sum2 + nums2[i]);
            }
            nums2[i] = min(nums2[i] + sum2, -sum2 + nums2[i]) + sum2;
            sum2 = min(nums2[i] + sum2, -sum2 + nums2[i]);
        }
        int max1 = *max_element(nums1.begin(),nums1.end());
        int max2 = *max_element(nums2.begin(),nums2.end());
        
        cout << max(max1,max2) << "\n";

    }
}