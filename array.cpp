#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;



int tlargestvalue(vector<int>&arr){
   int n = arr.size();
   int first = INT_MIN, second = INT_MIN, thirdd = INT_MIN;

   for(int i=0 ; i<n; i++){

    if(arr[i]>first){
        thirdd = second;
        second = first;
        first = arr[i];
    }
    else if(arr[i]>second){
        thirdd = second;
        second = arr[i];
    }
    else if(arr[i]>thirdd){
        thirdd = arr[i];
    }
   }
   return thirdd;
}


    // int largestvalue(vector<int>&arr){
    //     int n = arr.size();
    //     int largest = 0;
    //     for(int i = 0 ; i<n; i++){
    //         if(arr[i]>largest){
    //             largest = arr[i];
    //         }
    //     }
    //     return largest;
        

    // }
    




int main(){
    vector<int>arr={1,23,5,6,7,1};
    cout<<tlargestvalue(arr);
    return 0;

}
