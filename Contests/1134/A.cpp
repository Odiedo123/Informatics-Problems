#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(abs(a-c) == 2){
            if(max(a,c) - 1 == b){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else if(abs(c-b) == 2){
            if(max(b,c) -1 == a){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else if(abs(a-b) == 2){
            if(max(a,b) -1 == c){
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