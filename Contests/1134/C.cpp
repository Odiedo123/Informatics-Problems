#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n;i++){
            cin >> nums[i];
        }
        sort(nums.begin(),nums.end());
        vector<int> front;
        vector<int> back;
        for(int i = 0; i < n;i++){
            if(i%2 == 0){
                front.push_back(nums[i]);
            }
            else{
                back.push_back(nums[i]);
            }
        }
        reverse(back.begin(),back.end());
        vector<int> solution;
        solution = front;
        for(int i = 0; i < back.size();i++){
            solution.push_back(back[i]);
        }
        int count = 0;
        for(int i = 1; i < n-1;i++){
            if(solution[i] > solution[i+1] || solution[i] > solution[i-1]){
                count += 1;
            }
        }
        if(n == 1){
            count += 1;
        }
        else{
            count += 2;
        }
        cout << count << "\n";
        for(int element: solution){
            cout << element << " ";
        }
        cout << "\n";

    }
}