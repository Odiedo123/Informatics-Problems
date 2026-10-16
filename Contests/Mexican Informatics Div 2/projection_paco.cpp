#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        int start = 0;
        for(int i = 0; i < n;i++){
            cin >> nums[i];
            if(nums[i] > start){
                start += 2*(nums[i]-start);
            }
            else{
                start -= 2*(start-nums[i]);
            }
        }
        int start2 = start;
        for(int i = 0; i < n;i++){
            start2 += 2*(nums[i]- start2);
        }
        if(start2 == 0){
            cout << start/2 << "\n";
        }
        else{
            cout << -start/2 << "\n";
        }

    }
}