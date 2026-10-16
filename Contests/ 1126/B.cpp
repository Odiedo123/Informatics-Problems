#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> cards(n);
        unordered_map<int,int> count;
        bool out = false;
        for(int i = 0; i < n; i++){
            cin >> cards[i];
            count[cards[i]] += 1;
        }
        sort(cards.begin(),cards.end());
            for(int i = 0; i <= n;i++){
                if(count[i] % 2 == 0){
                    if(count[i]/2 < k){
                        cout << "NO" << "\n";
                        out = true;
                        break;
                    }
                }
                if(count[i]% 2 == 1){
                    if(count[i]/2  + 1 < k){
                        cout << "NO" << "\n";
                        out = true;
                        break;
                    }
                    else if((count[i]/2  + 1 >= k) && (count[i]/2 < k)) {
                        cout << "YES" << "\n";
                        out = true;
                        break;
                    }
                }
            }
            if(out == false){
                cout << "NO" << "\n";
            }

    }
}