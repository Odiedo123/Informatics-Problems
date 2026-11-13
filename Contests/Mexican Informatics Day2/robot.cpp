#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(n == 1){
        cout << m << "\n";
        for(int i = 0; i < m;i++){
            cout << m+1 << " ";
        }
        cout << "\n";
    }
    if(n == 2){
        cout << m << "\n";
        for(int i = 0; i < m;i++){
            cout << m << " ";
        }
    }
}