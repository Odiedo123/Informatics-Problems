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
        unordered_map<char,bool> map;
        int count = 0;
        for(int i = 0; i < n/2;i++){
            if(s[i] != s[n-i-1]){
                if(s[i] > s[n-i-1]){
                    for(char j = s[i];j > s[n-i-1];j--){
                        if(map[j] == false){
                            count += 1;
                            map[j] = true;
                        }
                    }
                }
                else{
                    for(char j = s[n-i-1];j > s[i];j--){
                        if(map[j] == false){
                            count += 1;
                            map[j] = true;
                        }
                    }
                }
            }
        }
        cout << count << "\n";
    }
}