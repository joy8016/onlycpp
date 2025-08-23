#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>v;

    // //     v.push_back(1);
    // //     v.emplace_back(2);
    // //     v.push_back(3);
    // //     v.emplace_back(4);
    // //     v.push_back(5);
    // //     v.emplace_back(6);

    // //     vector<int>::iterator it = v.begin();
    // //     // it++;

    // // //     cout<<*(it)<<" ";
    // // //     // it = it+3;
    // // //     cout<<*(it)<<" "<<endl;

    // // //     // cout<<v.at(-1);

    // // //     cout<<v.back();

    // // //    auto a = "my name is joydeb";
    // // //    cout<<typeid(a).name();

    // //    for(auto it = v.begin(); it!=v.end(); it++){
    // //     cout<<*(it)<<" ";
    // //    }

    // //    while(it!=v.end()){
    // //     it++;
    // //     cout<<"\n"<<*(it)<<" ";
    // //     it++;

    // //    }

    // //   cout<<v.erase(v.end());

    // // vector<int>v(2, 100);
    // // v.insert(v.begin(), 50);

    // // v.insert(v.begin()+1, 2, 10);

    // // vector<int>::iterator it = v.begin();

    // // // while(it!=v.end()){
    // // //     cout<<*(it)<<" ";
    // // //     it++;
    // // // }

    // // cout<<v.size();

    // // vector<int>v1;
    // // v.insert(v.begin(), v1.begin(), v1.end());
    // // for(auto i:v1){
    // //     cout<<i<<" ";
    // // }

    // // vector<char>v= {'a', 'b'};
    // // vector<char>v2 = {'c', 'd'};
    // // v.swap(v2);

    // // for(char i:v) cout<<i<<endl;

    // // for(char i:v2)  cout<<i<<" ";

    // // vector<string>v = { "apple", "pineapple", "orange", "jackfruit"};
    // // vector<string>v2 = {"jaguar", "bugati", "land rover", "rolls royace"};

    // // vector<int>v2  = {3, 4,5, 1, 5, 6};

    // // // v.swap(v2);

    // // swap(v2[0], v2[3]);

    // // cout<<"this is the v2 vector: ";
    // // for(int i:v2) cout<<i<<" ";

    // // cout<<"this is the v2 vector:";

    // // for(string i:v2)  cout<<i<<" ";

    // // list<int>l = {1,2,4,5,6,6};
    // // for(auto i:l) cout<<i<<" "<<endl;

    // // l.push_front(3);
    // // for(auto i:l) cout<<i<<" ";

    // deque<string>fruit = {"apple", "orange", "lichi"};

    // for(int i = 0; i<fruit.size(); i++){
    //     cout<<fruit[i]<<" "<<endl;
    // }

    // fruit.push_front("guahava");
    // for(int i = 0; i<fruit.size(); i++){
    //     cout<<fruit[i]<<" ";
    // }

    // cout<<fruit.at(0)<<endl;

    // // cout<<fruit.begin();

    // fruit.pop_back();
    // for(int i = 0; i<fruit.size(); i++){
    //     cout<<fruit[i]<<" ";
    // }

    // stack<string>st;

    // st.push("(");
    // st.push(")");
    // st.push("}");
    // st.push("{");
    // st.push("[");
    // st.push("]");
    // cout<<st.size()<<endl;

    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<!st.empty();

    // queue<string>q;

    // q.emplace("lamborgini");
    // q.emplace("marcedes");
    // while(!q.empty()){
    //     cout<<"first queue is that:"<<q.front()<<" "<<endl;
    //     q.pop();
    // }

    // q.push("volskwagan");
    // q.push("rolls royace");
    // q.pop();

    // while(!q.empty()){
    //     cout<<q.front()<<" "<<endl;
    //     q.pop();
    // }

    // queue<string>qu;
    // qu.emplace("apple");
    // qu.emplace("balckberry");
    // qu.emplace("orange");
    // qu.emplace("watermelon");

    // swap(qu, q);
    // // while(!q.empty()){
    // //     cout<<"after swap queue is that:"<<q.front()<<" "<<endl;
    // //     q.pop();
    // // }

    // while(!qu.empty()){
    //     cout<<"after swap :"<<qu.front()<<" ";
    //     qu.pop();
    // }

    // deque<string>dq;
    // dq.assign(2);
    // while(!dq.empty()){
    //     cout<<dq.front();
    //     dq.pop_front();
    // }

    // priority_queue<string>pq ;

    // // priority_queue<string, vector<string>, greater<string>>pq;

    // pq.emplace("ford");
    // pq.emplace("lamborgini");
    // pq.push("farari");
    // pq.emplace("jaguar");
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    // stack<int>st;
    // queue<int>q;
    // vector<int>v;
    // set<string>st;
    // st.insert("joy");
    // st.insert("uma");
    // st.insert("deb");
    // st.insert("bijay");
    // st.insert("bijay");

    // for(int i = st.begin(); i<st.end(); i++){
    //     cout<<i<<" ";
    // }

    // set<string>st = {"volvo", "ford", "bmw", "mazda"};

    // set<string>::iterator it = st.begin();

    // it++;
    // cout<<*(it)<<" "<<endl;

    // list<int>l = {1,4,5,6,7};
    // cout<<l.begin();

    //    st.erase("ford");

    //    for(auto i = st.begin(); i!=st.end(); i++){
    //     cout<<*i<<" ";
    //    }

    // if- else condition

    // int num;
    // cout<<"entr a number:";
    // cin>>num;

    // //outer if condition

    // if(num!=0){

    //     //inner if conditon

    //     if(num>0){
    //         cout<<"the number is positive:"<< num;
    //     }

    //     //inner else condtion
    //     else{
    //         cout<<"the number is negative :"<<num;
    //     }

    // }
    // else{
    //         cout<<"the num is 0 and it is neither positive not negative:"<<num;
    // }

    // int num;
    // cout << "enter the number:";
    // cin >> num;

    // // (num%2==0)?cout<<"the number is even:"<<num:cout<<"the nunber is odd:"<<num;

    // if (num % 2 == 0)
    // {
    //     cout << "the number is:" << num<<endl;
    // }
    // else if (num % 2 != 0)
    // {
    //     cout << "the number is odd:"<<endl;
    // }

    // cout << "this line is always printed";
    

    // pattern
    // int n;
    // cout<<"enter the number:";
    // cin>>n;

    // for(int i =n; i>=1; i--){
    //     for(int j = i; j>0; j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    

    //i=1,2,3,4,5,6
    
    //k=4,3,2,1,0
    //j=6
    //    *
    //   **
    //  ***
    // ****
    //*****


    
    // for(int i = 0; i<n; i++){
    //     for(int k = n-i; k>0; k--){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j<=i; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;

    // }
    

    //i = 1
    //j=1
    //k = 0

    // *****
    // 

   int n ;
   cout<<"enter the number:";
   cin>>n;

   for(int i = n; i>0; i--){
    for(int k=0; k<=n; k++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;
   }
    return 0;
}