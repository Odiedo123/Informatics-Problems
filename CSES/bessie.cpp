#include <bits/stdc++.h>
#include <fstream>

using namespace std;
using ll = long long;
int main(){
    ofstream fout("diamond.out");
    ifstream fin("diamond.in");
    ll n,k;
    fin >> n >> k;
    vector<ll> nums(n);
    for(ll i = 0; i < n;i++){
        fin >> nums[i];  
    }
    sort(nums.begin(),nums.end());
    ll point1 = n-1;
    ll point2 = n-2;
    ll count = 0;
    while(point2 >= 1 && point1 >= 0){
        if(nums[point2] - nums[point1] <= k){
            count += 1;
            point1 -= 1;
        }
        else{
            if(point2 - point1 == 1){
                point1 -= 1;
            }
            else{
                point2 -= 1;
            }
        }
    }
    fout << count << "\n";
}