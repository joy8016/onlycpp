#include<iostream>
#include<vector>


using namespace std;
int secondlargest(vector<int>&v, int n){
    int largest=v[0];
    int slargest=-1;
    for(int i=1; i<n; i++){
        if(v[i]>largest){
            slargest = largest;
            largest = v[i];

        }
        //store secondlargest element
        else if(v[i]<largest && v[i]>slargest){
            slargest=v[i];
        }
    }
    return slargest;
}
int secondlow(vector<int>&v1, int n){
    int smallest=v1[0];
    int ssmallest=INT_MAX;
    for(int i=1; i<n; i++){
        if(v1[i]<smallest){
            ssmallest = smallest;
            smallest = v1[i];
        }
        else if(v1[i]!=smallest && v1[i]<ssmallest){
            ssmallest = v1[i];
        }
    }
}
int main(){
    int y;
    cin>>y;
    vector<int>v;
    for(int i=0; i<v.size(); i++){
        int ele;
        cin>>ele;
        v.push_back(ele)
    }
    vector<int>v1;
    for(int i=0; i<v1.size(); i++){
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }
    int slarest=secondlarggest(v, n);
    int ssmall=secondlow(v1, n);
    cout<<slarest;
    cout<<ssmall;
    reeturn 0;
}
