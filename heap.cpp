#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size = 0;
    }

    void push(int val){
        size +=1;
        int index = size;
        arr[index]=val;

        while (index>1)
        {
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
        

    }

    void print(){
        for(int i = 1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteFromheap(){
        if(size == 0){
            cout<<" nothing to delete"<<endl;
            return;
        }

        //put last element in to first;
        arr[1] = arr[size];
        size--;


        int i = 1;

        while (i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(arr[leftIndex]>arr[i]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(arr[rightIndex] > arr[i]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
        
    }

    

};

int main(){

    heap h;
    h.push(23);
    h.push(50);
    h.push(70);
    h.push(34);
    h.push(80);
    h.push(40);
    h.push(50);


    h.print();

    h.deleteFromheap();
    h.print();
    return 0;
}