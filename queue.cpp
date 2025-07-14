#include <iostream>
// #include <queue>
// #include<stack>
// #include <algorithm>
// #include <vector>
#include <bits/stdc++.h>

using namespace std;

int secondlargest(vector<int> &v)
{
    int n = v.size();

    int largest = INT_MIN, slargest = INT_MIN, tlargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(v[i]>largest) largest = v[i];

    }

    for(int i = 0; i<n; i++){
        if(v[i]<largest && v[i]>slargest) slargest= v[i];
    }
    for(int i = 0; i<n; i++){
        if(v[i]<slargest && v[i]>tlargest) tlargest= v[i];
    }

    return tlargest;

}

int triplet(vector<int> &v)
{
    int n = v.size();

    int maxproduct = INT_MIN;

    for(int i = 0; i<n-2 ; i++){
        for(int j = i+1; j<n-1; j++){
            for(int k = j+1; k<n; k++){
                maxproduct = max(maxproduct, v[i]*v[j]*v[k]);
            }
        }

    }
    return maxproduct;

    int largest = INT_MIN, slargest = INT_MIN, tlargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > largest)
            largest = v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] < largest && v[i] > slargest)
            slargest = v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] < slargest && v[i] > tlargest)
            tlargest = v[i];
    }
    return largest * slargest * tlargest;
}

int main()
{

    vector<int> v = {10, 3, 5, 6, 20};
    cout << triplet(v);

    queue<int> q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    stack<int>s;

    while (!q1.empty())
    {
        s.push(q1.front());
        q1.pop();

    }
    while(!s.empty()){
        q1.push(s.top());
        s.pop();
    }

    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }

    queue<int>q2;

    q2.push(2);
    q2.push(3);
    q2.push(5);
    q2.push(1);
    q2.push(9);

    q1.swap(q2);
    cout<<"q1 is : ";
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }cout<<endl;
    cout<<"q2 is : ";
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }

    return 0;
}