#include<bits/stdc++.h>

using namespace std;

int triplet(vector<int>&arr){
    int n = arr.size();
    int total = 1;

    sort(arr.begin(), arr.end());

     return max(arr[0]*arr[1]*arr[n-1], arr[n-1]*arr[n-2]*arr[n-3]);
 
 return total;
}


int main(){

    vector<int>arr={-10,-3,5,6,-20};
    int max = triplet(arr);
    cout<<max;
    return 0;

}