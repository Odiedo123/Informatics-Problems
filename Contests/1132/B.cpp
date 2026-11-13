#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> nums(n);
        unordered_map<int,int> count2;
        bool out = false;
        for(int i = 0; i < n ; i++){
            cin >> nums[i];
            count2[nums[i]] += 1;
            if(count2[nums[i]] > k){
                cout << "NO" << "\n";
                out = true;
                break;
            }
        }
        if(out == false){
            sort(nums.begin(),nums.end());
            reverse(nums.begin(),nums.end());
            vector<int> solution;
            reverse(nums.begin(),nums.begin() + k);
            solution = nums;
                // for(int i = n-k; i < n;i++){
                //     solution.push_back(nums[i]);
                // }
                // for(int i = 0; i < n-k;i++){
                //     solution.push_back(nums[i]);
                // }

            cout << "YES" << "\n";
            for(int element : solution){
                cout << element << " ";
            }
            cout << "\n";
        }
    }
}