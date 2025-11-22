#include <iostream>
using namespace std;
int main(){
    int arr[8];
    int i;
    for(i=0;i!=8;i++){
        cin>>arr[i];
    }
    int max=0;
    for(auto &c:arr){
        if(c>max){
            max=c;
        }
    }
    cout<<max<<endl;
    for(i=0;i!=8;i++){
        if(arr[i]==max){
            cout<<i<<" ";
        }
    }
    return 0;

}