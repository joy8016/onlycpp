#include<bits/stdc++.h>
using namespace std;

int countVowels(string s){
    int count=0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i] == 'y'){
            count ++;
        }
    }
    return count;
    s.

}

int main(){
    cout<<"the vowels no. are:"<<countVowels("eagerer");
    return 0;
}