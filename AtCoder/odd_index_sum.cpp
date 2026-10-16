#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(i % 2== 0){
            sum += input;
        }
    }
    cout << sum << "\n";
}