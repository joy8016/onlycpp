#include<iostream>
#include<vector>
using namespace std;
void negative(int arr[],  int y){
    vector<int>n;
    vector<int>m;


    for(int i=0; i<y; i++){
        if(arr[i]>=0){
            n.push_back(arr[i]);
        }
        else{
            m.push_back(arr[i]);
        }
    }
    int i=0; 
    int j=0;
    while(j<n.size()){
        arr[i++]=n[j++];
    }
    while(j<m.size()){
        arr[i++]=m[j++];
        
    }
    
    
    
    
}
int main(){
    int arr[]={-2, 6, -4, 8, -2};
    int x=sizeof(arr)/sizeof(arr[0]);
    negative(arr,x);
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    
    
    return 0;

}
