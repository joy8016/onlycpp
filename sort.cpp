#include<bits/stdc++.h>
using namespace std;

string sortString(string s){
    int n = s.length();
    for(int i=0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(int (s[j])>int (s[j+1])){
                swap(s[j], s[j+1]);
            }
        }
    }
    return s;
    
}

int main(){
    
    
    cout<<sortString("ABhCDe");
    return 0;

}