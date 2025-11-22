#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];//int arr[n]={1};全部初始化为1，错了
    for(int i=0;i!=n;i++){
        arr[i]=1;//正确初始化
    }
    for(int i=2;i!=k+1;i++){
        for(int j=0;j!=n;j++){
            if((j+1)%i==0){
                if(arr[j]==0){
                    arr[j]=1;
                }
                else arr[j]=0;
            }
        }
    }
    for(int i=0;i!=n;i++){
        if(arr[i]==1){
            cout<<i+1<<" ";
        }
    }
    return 0;
}