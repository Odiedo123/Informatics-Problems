#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        string ans = "";
        if(max(x,max(z,y)) == z){
            for(int i = 0; i < x+y+z;i++){
                ans += 'S';
            }
        }
        else if(max(x,max(z,y)) == y){
            for(int i = 0; i < x+y+z;i++){
                ans += 'R';
            }
        }
        else if(max(x,max(z,y)) == x){
            for(int i = 0; i < x+y+z;i++){
                ans += 'P';
            }
        }
        cout << ans << "\n";
    }
}