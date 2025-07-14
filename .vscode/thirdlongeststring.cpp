#include<iostream>
#include<string>
using namespace std;
string thirdlargest(string strarr[], int size){
    int len1, index1;
    len1=0;

    for(int i=0; i<size; i++){
        if(strarr[i].length()>len1){
            len1=strarr[i].length();
            index1=i;
        }

    }
}

int main(){
    string s1[]={"abcdefghh", "abcdefg", "abcdef","abcde", "abcd"};
   // string s2[]={"abc", "abc","abc","abc","abc"};
    //string s3[]={"abcc","abcd","abcd"};

    int size_s1=sizeof(s1)/sizeof(s1[0]);
    cout<<"array element";
    for(int i=size_s1-1; i>=0; i--){
        cout<<s1[i]<<" ";

    //thirdlargest(s1, size_s1);
    cout<<"third largest ekstring is:"<<thirdlargest(s1, size_s1);
    }
    return 0;
}