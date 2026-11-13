#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int side = n/2;
        int side2 = n - n/2;
        cout << side*side2 << "\n";
    }
}