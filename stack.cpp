#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int size;
    int *arr;
    int top_index;

public:
    Stack(int val)
    {
        size = val;
        arr = new int(val);
        top_index = -1;
    }

    // create push function

    void push(int value)
    {
        // check is the Stack full not
        if (top_index == size - 1)
        {
            cout << "the Stack is overflow" << endl;
        }
        else
        {
            top_index++;
            arr[top_index] = value;
            cout<<"push the "<<arr[top_index]<< " in stack"<<endl;
        }
    }

    // create pop function

    void pop()
    {
        if (top_index == -1)
        {
            cout << "the Stack is underflow" << endl;
        }

        else
        {
            cout<<"popped the no "<<arr[top_index]<<" from the stack"<<endl;
            top_index--;
        }
    }

    // create gettop function

    int getTop()
    {
        if (top_index == -1)
        {
            return INT_MIN;
        }

        return arr[top_index];
    }

    // display function
};

int main()
{

    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(9);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
   

    cout << "the top is:" << st.getTop();
    return 0;
}