#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        string p,q;
        string final = "";
        cin >> p >> q;
        unordered_map<char,int> count;
        for(int i = 0; i < m;i++){
            count[q[i]] += 1;
        }
        for(int i = 0; i < n;i++){
            if(count[p[i]] >= 1){
                count[p[i]] -= 1;
            }
            else{
                final = final + p[i];
            }
        }
        bool out = true;
        for(int i = 0 ; i < m;i++){
            if(count[q[i]] > 0){
                out = false;
            }
        }
        if(final.size() == 3 && (out == true)){
            unordered_map<char,int> count2;
            for(int i = 0; i < 3;i++){
                count2[final[i]] += 1;
            }
            if((count2['s'] == 1) && (count2['i'] == 1 )&& (count2['x'] == 1)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else{
            cout << "NO" << "\n";
        }
    }
}