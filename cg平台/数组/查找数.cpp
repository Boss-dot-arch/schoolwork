#include <iostream>
using namespace std;
int main(){
    int arr[8];
    int i;
    for(i=0;i!=8;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    bool found=false;//标记有没有查找到（bool)
    for(i=0;i!=8;i++){
        if(arr[i]==num){
            cout<<i+1;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"cannot find";
    }
    
    return 0;
}