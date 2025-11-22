#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"input m: ";
    cin>>m; 
    int n;
    cout<<"input n: ";
    cin>>n;
    int arr[1000];
    for(int i=0;i!=1000;i++){
        if(i>=1&&i<m+1){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    int bs=0;
    int count=m;//终止条件为只剩下一只猴子用count计数
    for(int i=1;count!=1;){
        if(arr[i]==1){
            bs++;
        }
        if(bs==n){
            arr[i]=0;
            bs=0;
            count--;
        }
        i++;//注意i++的位置
        if(i>m){
            i=1;
        }
    }
    cout<<"king: ";
    for(int i=0;i!=1000;i++){
        if(arr[i]==1){
            cout<<i;
        }
    }
    return 0;

}