#include<iostream>
using namespace std;
int thirdelement(int arr[], int n){
    int max=0;
    int secondmax=0;
    int maxindex;
    int secondmaxindex;
    for(int i=0; i<n; i++){
        if(arr[i]==max){
            max=arr[i];
            maxindex=i;


        }
        else{
            secondmax=arr[i];
            secondmaxindex=i;
            

             
            
        }
        
    }
    return maxindex;
    return secondmaxindex;
}

int main(){
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int indexofmax=thirdelement(arr,n);
    cout<<indexofmax<<endl;
    int indexofsecond=thirdelement(arr,n);
    cout<<indexofsecond<<endl;
    arr[indexofmax]=-1;
    arr[indexofsecond]=-0;
    int thirdlargestelement=thirdelement(arr, n);
    cout<<thirdlargestelement;
    return 0;

}