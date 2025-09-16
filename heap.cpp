#include <bits/stdc++.h>
using namespace std;

class heap
{

    int *arr;
    int elements;       // total elements in h
    int total_elements; // total elements of array

public:
    heap(int n)
    {
        arr = new int(n);
        elements = 0;
        total_elements = n;
    }

    // create insertion function
    void insert(int value)
    {
        // edge case
        if (elements == total_elements)
        {
            cout << "h is overflow"<<endl;
        }

        arr[elements] = value;
        int index = elements;
        elements++;

        // check if child node greater than patent node

        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
        cout << "this element are inserted in h: " << arr[index] << endl;
    }

    void heapift(){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left<elements && arr[left]>arr[largest]){
            largest = left;

        }
        if(right<elements & arr[right]>arr[largest]){
            largest = right;
        }
    }

    void delete(){
        if(elements == 0){
            return 0;
        }

       
        arr[0]=arr[elements-1];
        elements--;

        heapify(0);


    }

    void print(){
        for(int i =0; i<total_elements; i++){
            cout<<"-> "<<arr[i]<<" ";
        }
    }
};

int main()
{

    heap h(10);
    h.insert(23);
    h.insert(12);
    h.insert(34);
    h.insert(45);
    h.insert(21);
    h.insert(4);
    h.insert(5);
    h.insert(1);
    h.insert(2);
    h.print();
    h.insert(200);
    h.print();

    return 0;
}