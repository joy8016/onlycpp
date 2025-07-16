#include<iostream>
using namespace std;
int main(){
    int arr[]={1,34,2,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 4;
    for(int i = 0; i<n; i++){
        if(arr[i]==ele){
           break;
        }
    }
    cout<<arr<<"\n";
    cout<<n;
    return 0;
}