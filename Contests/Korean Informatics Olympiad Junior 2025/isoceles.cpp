#include <iostream>
#include <vector>

using namespace std;

int main{
    int n;
    cin >> n;
    vector<vector<int>> coordinates(n);
    for(int i = 0; i < n;i++){
        vector<int> input;
        int x,y;
        cin >> x >> y;
        input.push_back(x);
        input.push_back(y);
        coordinates.push_back(input);
    }

}