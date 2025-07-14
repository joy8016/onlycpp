#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,2,6,3,8,9};
    int min = 0;
    int max =0 ;
    for(int i=0; i<v.size()-1; i++){
        for(int j = i+1; j<v.size()-1; j++){
            if(i<j){
                min += v[i];
                // max = v[j];

            }
            else{
                min+=v[j];
                // max = v[i];
            }
           
            
        }
    }
    cout<<min<<endl;
    cout<<max;
    return 0;
} 