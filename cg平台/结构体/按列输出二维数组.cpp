#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int ch_arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ch_arr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ch_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}