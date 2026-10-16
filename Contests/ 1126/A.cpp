#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if((a == 0 && b > 1)){
            cout << -1 << "\n";
        }
        else{
            int moves = a;
            if(b > a){
                if(b == a + 1){
                    cout << moves + 1 << "\n";
                }
                else{
                    cout << -1 << "\n";
                }
            }
            else if(b == a){
                cout << moves << "\n";
            }
            else{
                if(a % 2 == b % 2){
                    cout << moves << "\n";
                }
                else{
                    cout << moves + 1 << "\n";
                }
            }

        }
    }
}