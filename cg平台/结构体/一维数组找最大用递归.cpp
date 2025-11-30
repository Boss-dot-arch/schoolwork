#include <iostream>
using namespace std;
int Max(int arr[],int L,int R){
    if(L==R){
        return arr[L];
    }
    int mid=(L+R)/2;
    int left_max=Max(arr,L,mid);
    int right_max=Max(arr,mid+1,R);
    if(left_max>right_max){
        return left_max;
    }
    else{
        return right_max;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i!=n;i++){
        cin>>arr[i];
    }
    cout<<Max(arr,0,n-1)<<endl;
    return 0;
}

