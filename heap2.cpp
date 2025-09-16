#include<bits/stdc++.h>
using namespace std;

int heightofheap(int n, int arr[]){
    if(n==1){
        return 1;
    }

    int height = 0;
    while(n>1){
        height++;
        n/=2;
    }
    return height;
}

int main(){
    int arr[3];

    cout<<heightofheap(18, arr);
    return 0;


}