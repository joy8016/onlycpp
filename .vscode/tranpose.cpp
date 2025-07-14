#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //tranpose matrix
    int tranpose[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            tranpose[i][j]=arr[j][i];
        }
    }
    //outpput the tranpose matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m;  j++){
            cout<<tranpose[i][j]<<" ";

        }
        cout<<endl;

    }
    
    return 0;
}