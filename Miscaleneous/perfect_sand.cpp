#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(b >= a){
            cout << -1 << '\n';
        }
        else{
            cout << min(b,a-b) << "\n";
        }
    }
}