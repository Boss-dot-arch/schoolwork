#include <iostream>
using namespace std;
int main(){
    int arr[100]={0};
    int x;
    while(cin>>x){
        arr[x]++;
    }
    for(int i=0;i<100;i++){
        if(arr[i]>=1){
            for(int j=arr[i];j>0;j--){
                cout<<i<<" ";
            }
        }
    }
    return 0;

}