#include<bits/stdc++.h>
using namespace std;

int smallest(vector<int>&v){
    int findex; = 0;
   for(int i = 0; i<v.size(); i++){
    for(int j = 1; j<v.size(); j++){
        if(v[i]>v[j]){
            findex = v[j];
        }
        else{
            findex = v[i];
        }
    }
    return findex;
   }

int main(){
  vector<int>v = {2,3,10,5,6};
    cout<<smallest(v);
    return  0;
    
}