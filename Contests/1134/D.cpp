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
        unordered_map<char,char> change;
        int count = 0;
        char sw = 0;
        for(int i = 0; i <n;i++){
            change[s[i]] = s[i];
        }
        for(int i = 0; i <n/2;i++){
            int index = n-i-1;
            if(change[s[i]] == change[s[index]]){
                continue;
            }
            else{
                if(change[s[i]] < change[s[index]]){
                    while(change[s[index]] != change[s[i]]){
                        if(change[change[s[index]]- 1] >= change[s[i]]){
                            change[s[index]] = change[change[s[index]] - 1];
                        }
                        else{
                            change[s[index]] = change[s[index]]- 1;
                            change[change[s[index]] - 1] = change[s[index]]-1;
                        }
                        count += 1;
                    }
                }
                else{
                    while(change[s[index]] != change[s[i]]){
                        if(change[change[s[i] - 1]] >= change[s[index]]){
                            change[s[i]] = change[change[s[i]] - 1];
                        }
                        else{
                            change[s[i]] = change[s[i]]- 1;
                            change[change[s[i]] - 1] = change[s[i]]-1;
                        }
                        count += 1;
                    }
                }
            }
        }
        cout << count << "\n";
    }
}