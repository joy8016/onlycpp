#include<iostream>
#include<vector>
using namespace std;


int subsetsum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
        cout<<sum;
    }  
}


int main(){

    int arr[]={1,5,5,11};
    int a = subsetsum(arr, 4);
    cout<<a;

    return 0;

}