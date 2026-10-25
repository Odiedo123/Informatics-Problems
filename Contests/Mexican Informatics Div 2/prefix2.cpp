#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> nums(n);
        vector<long long> best;
        for(int i = 0; i< n ; i++){
            cin >> nums[i];
        }
        long long L =0;
        long long H = 0;
        for(int i = 0; i < n;i++){
            long long brest = max((nums[i]+abs(L)),(nums[i]+abs(H)));
            best.push_back(brest);
            L = min(nums[i],nums[i]+2*L);
            H = max(nums[i],nums[i]+2*H);
        }
        cout << *max_element(best.begin(),best.end()) << "\n";

    }
}