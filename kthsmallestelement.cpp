#include<bits/stdc++.h>
using namespace std;

int smallestelement(vector<int> &arr, int l , int r, int k){

    priority_queue<int>q;

    for(int i = 0; i<k; i++){
        q.push(arr[i]);
    }

    for(int i=k; i<=r; i++){
        if(arr[i]<q.top()){
            q.pop();
            q.push(arr[i]);
        }

    }
    return q.top();
}
   


int main(){

    vector<int>v={2,4,2,6,8,9,5};
    cout<<smallestelement(v, 0, v.size()-1, 4);
    return 0;

  

}