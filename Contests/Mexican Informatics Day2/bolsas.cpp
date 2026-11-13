#include <bits/stdc++.h>
#include "bolsas.h"

using namespace std;
using ll = long long;

ll helper(vector<int> &weight,pair<ll,ll> range,ll n){
    ll count = 0;
    for(ll i = 0;i < n; i++){
        if(i >= range.first && i <= range.second){
            weight[i] = 1;
            count += 1;
        }
        else{
            weight[i] = 0;
        }
    }
    return count;
}



int encontrar_bolsa(int n, vector<int> A) {

    vector<int> weight(n);
    pair<ll,ll> range;
    if(n != 2){
        range.first = 0;
        range.second = n/2;
        while(true){
            ll count;
            for(int i = 0;i < n; i++){
                if(i >= range.first && i <= range.second){
                    weight[i] = 1;
                    count += 1;
                }
                else{
                    weight[i] = 0;
                }
            }
            ll num = pesar(weight);
            if(num != 7*count){
                range.second = (range.first + range.second)/2;
            }
            else{
                ll switching = range.first;
                range.first = range.second + 1;
                range.second += range.second - switching;
            }
            if(range.second - range.first <=1){
                break;
            }
        }
        pair<ll,ll> range2;
        range2.first = range.first;
        range2.second = range.first;
        for(int i = 0;i < n; i++){
            if(i >= range2.first && i <= range2.second){
                weight[i] = 1;
            }
            else{
                weight[i] = 0;
            }
        }
        ll num = pesar(weight);
        if(num != 7){
            return range.first;
        }
        else{
            return range.second;
        }
    }
    else{
        weight[0] = 0;
        weight[1] = 1;
        if(pesar(weight) != 7){
            return 1;
        }
        else{
            return 0;
        }
    }
}
