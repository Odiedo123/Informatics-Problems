#include <bits/stdc++.h>

using namespace std;

void func(vector<int> &solution, int &x,int layer,int prev){
    for(int i = 0; i < x/layer;i++){
        for(int j = 0 ; j < layer; j++){
            solution.push_back(prev + i + 1);
        }
    }
}

int main(){
    int p;
    cin >> p;
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x == 1){
            cout << 1 << "\n";
            cout << 0 << "\n";
        }
        else if(p==1){
            cout << 0 << "\n";
            // vector<int> solution;
            // int prev = -1;
            // for(int i = 1;i <= x;i++){
            //     func(solution,x,i,prev);
            //     prev = solution[solution.size()-1];
            // }
            // cout << solution.size() << "\n";
            // for(int element : solution){
            //     cout << element << " ";
            // }
            // cout << "\n";
        }
        else{
            vector<int> solution;
            int og_x = x;
            if(x%2 == 0){
                solution.push_back(2);
                x -= 1;
            }
            int first = x/2;
            int second = x - x/2;
            for(int i = 0; i < first;i++){
                solution.push_back(0);
            }
            for(int i = 0; i < second;i++){
                solution.push_back(1);
            }
            if(og_x == 2){
                cout << 2 << "\n";
            }
            else{
                cout << max(first,second) << "\n";
            }
            for(int element : solution){
                cout << element << " ";
            }
            cout << "\n";
        }
    }
}