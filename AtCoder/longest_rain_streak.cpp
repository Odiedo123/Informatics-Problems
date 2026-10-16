#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int maxi = 0;
    int pre = 0;
    string s;
    cin >> s;
    
    for(int i = 0; i < n;i++){
        if((s[i] == 'R') && (i == n-1)){
            pre += 1;
            if(pre > maxi){
                maxi = pre;
            }
        }
        if(s[i] == 'R'){
            pre += 1;
        }
        else{
            if(pre > maxi){
                maxi = pre;
            }
            pre = 0;
        }
    }
    cout << maxi << "\n";
}