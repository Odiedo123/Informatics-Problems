#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char,int> map;
        for(char i = 'a'; i < 'z';i++){
            map[i] = i;
        }
        int count = 0;
        for(int i = 0; i < n/2;i++){
            if(map[s[i]] == map[s[n-i-1]]){
                continue;
            }
            else{
                if(map[s[i]] > map[s[n-1-i]]){
                    count += map[s[i]] - map[s[n-1-i]];
                    for(char j = map[s[i]]; j >= map[s[n-1-i]];j--){
                        map[j] = map[s[n-i-1]];
                    }
                }
                else{
                    count += map[s[n-i-1]] - map[s[i]];
                    for(char j = map[s[n-1-i]]; j >= map[s[i]];j--){
                        map[j] = map[s[i]];
                    }
                }
            }
        }
        cout << count << "\n";
    }
}