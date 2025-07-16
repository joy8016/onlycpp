#include<iostream>
#include<string>
#include<vector>
using namespace std;
string prefix(vector<string>&st){
    string pref = st[0];
    int preflen = pref.length();
    
    
    
    cout<<pref<<endl;
    // cout<<preflen;
    int j = pref.substr(0, preflen);

    cout<<j;
}

int main(){
    vector<string>st = {"joy", "deb","hero"};
    cout<<prefix(st);
    
    
    return 0;
}