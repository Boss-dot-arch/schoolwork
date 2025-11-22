#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[10];
    int num=x;
    int i0;
    for(i0=0;x!=0;i0++){
        x/=10;
    }
    for(int i=0;i!=10;i++){
        arr[i]=num%10;
        num/=10;
    }
    for(int j=0;j!=10;j++){
        if(arr[j]!=0){
            break;
        }
    }
    for(int k=0;k!=i0;k++){
        cout<<arr[k];
    }
    return 0;
}