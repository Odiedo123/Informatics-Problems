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
        int count = 0;
        if(s[0] == 'B'){
            count += 1;
        }
        for(int i = 0; i < n;i++){
            if(s[i] == s[i-1]){
                count += 1;
            }
        }
        cout << count << "\n";
    }
}