#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int total = 0;
        if(n != k){
            total = pow(2,n-k + 1) + 2*(k-1);
        }
        else{
            total = 2*k;
        }
        cout << total << "\n";

    }
}