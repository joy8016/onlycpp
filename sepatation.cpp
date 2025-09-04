#include<bits/stdc++.h>
using namespace std;

int separationString(string s){
    int count = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='e' && s[i+3]=='g'){
            count++;
        }
        else if(s[i]=='g' && s[i+3]=='e'){
            count++;
        }
    }
    return count;
}
int main(){
    cout<<separationString("eacgerer");
    return 0;
}