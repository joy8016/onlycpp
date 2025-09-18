#include<bits/stdc++.h>
using namespace std;

int minimum_cost(vector<int>&arr, int n){
    priority_queue<long long, vector<long long>, greater<long long>>p;

    for(int i = 0;i<n; i++){
        p.push(arr[i]);

    }

    long long cost = 0;

    while(p.size()>1){
        long long rope = p.top();
        p.pop();

        rope+=p.top();
        p.pop();
        cost+=rope;
        p.push(rope);
    }

    return cost;
}

int main(){

    vector<int>arr = {3,2,5,1,6,7};
    int n = arr.size();
    cout<<minimum_cost(arr, n);
    return 0;

}