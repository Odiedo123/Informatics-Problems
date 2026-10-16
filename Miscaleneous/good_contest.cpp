#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min = 100;
        for(int i = 0; i < 3; i++){
            int input;
            cin >> input;
            if(input < min){
                min = input;
            }

        }
        cout << n - min << "\n";
    }
}